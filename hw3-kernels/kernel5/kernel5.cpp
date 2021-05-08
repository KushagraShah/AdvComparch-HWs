#include "kernel5.h"

float kernel5(float bound, float a[ARRAY_SIZE], float b[ARRAY_SIZE])
{
    int i=0;
    float sum;
    float tmp[ARRAY_SIZE];
    loop1:for (i=0; i<ARRAY_SIZE; i++)
    {
    	tmp[i] = a[i] + b[i];
    }
    i=0;
	loop2:while (sum<bound && i<ARRAY_SIZE)
    {
        sum = tmp[i];
        i++;
    }

//    loop:while (sum<bound && i<ARRAY_SIZE)
//    {
//        sum = a[i] + b[i];
//        i++;
//    }
    return sum;
}
