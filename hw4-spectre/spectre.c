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
  // TODO: Write this function



  // TODO: Report the real result
  value[0] = '?';
  value[1] = '!';
  score[0] = 100;   // larger than or equal to score[1] by definition
  score[1] = 30;
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
  }
  return (0);
}