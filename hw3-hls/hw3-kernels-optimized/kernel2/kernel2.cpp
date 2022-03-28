#include "kernel2.h"

void kernel2( int array[ARRAY_SIZE] )
{
    int prev[3] = {array[0], array[1], array[2]};
    int result;

    loop:for(int i=3; i<ARRAY_SIZE; i++)
    {
    	result = prev[2] + prev[1] * prev[0];

    	prev[0] = prev[1];
    	prev[1] = prev[2];
    	prev[2] = result;

    	array[i] = result;
    }
}
