#include "kernel2.h"

void kernel2( int array[ARRAY_SIZE] )
{
    int i;
    loop:for(i=2; i<ARRAY_SIZE-1; i++)
    {
        array[i+1] = array[i] + array[i-1] * array[i-2];
    }
}
