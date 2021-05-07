#include "kernel7.h"

float kernel7(float a[ARRAY_SIZE], float b[ARRAY_SIZE])
{
    float sum = 0;
    loop:for(int i=0; i<ARRAY_SIZE; i++)
    {
        float diff = a[i] - b[i];
        if (diff > 0)
            sum = (sum + diff);
    }
    return sum;
}
