#include "kernel5.h"

float kernel5(float bound, float a[ARRAY_SIZE], float b[ARRAY_SIZE])
{
    int i=0;
    float sum;
    while (sum<bound && i<ARRAY_SIZE)
    {
        sum = a[i] + b[i];
        i++;
    }
    return sum;
}