#include "kernel2.h"

void kernel2( int array[ARRAY_SIZE] )
{
    int i;
    int elem2 = array[2], accum = array[1] * array[0];
    int prev = elem2;

    loop:for(i=3; i<ARRAY_SIZE; i++)
    {
    	array[i] = elem2 + accum;
    	accum = accum + prev * array[i-2];
    	prev = array[i];
    }
}
