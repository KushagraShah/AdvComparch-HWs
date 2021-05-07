#include "kernel2.h"

void kernel2( int array[ARRAY_SIZE] )
{
    int i;
    for(i=3; i<ARRAY_SIZE; i++)
        array[i] = array[i-1] + array[i-2] * array[i-3];
}