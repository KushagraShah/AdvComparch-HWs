#include "kernel8.h"

void kernel8(int array[ARRAY_SIZE], int multiplier, int offset)
{
    for (int i=6; i<ARRAY_SIZE-1-offset; ++i)
    {
        array[i] = array[i-6+offset]*multiplier;
    }
}

