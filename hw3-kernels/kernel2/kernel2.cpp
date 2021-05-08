#include "kernel2.h"

void kernel2( int array[ARRAY_SIZE] )
{
    int i;
    int accum = array[1]*array[0];
    int elem2 = array[2];

    loop:for(i=3; i<ARRAY_SIZE; i++)
    {
    	array[i] = elem2 + accum;
    	accum = accum + array[i-1]*array[i-2];
//        array[i] = array[i-1] + array[i-2] * array[i-3];
    }
}
