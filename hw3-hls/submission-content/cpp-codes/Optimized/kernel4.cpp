#include "kernel4.h"

void kernel4(int array[ARRAY_SIZE], int index[ARRAY_SIZE], int offset)
{
    int sum = 0;

	loop:for (int i=offset+1; i<ARRAY_SIZE-1; ++i)
    {
		sum = sum + index[i] * (array[i+1] - array[i]);
    }

	array[offset] = array[offset] + sum;
}
