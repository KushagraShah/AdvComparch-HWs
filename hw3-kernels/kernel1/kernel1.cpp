#include "kernel1.h"

void kernel1( int array[ARRAY_SIZE] )
{
    int i;
    for(i=0; i<ARRAY_SIZE; i++)
        array[i] = array[i] * 5;
}