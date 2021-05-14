#include "kernel5.h"
#define len 8

float kernel5(float bound, float a[ARRAY_SIZE], float b[ARRAY_SIZE])
{
    float sum[len];
    bool flag[len];
    fill:for (int i=0; i<len; i++)
    {
      	int idx = len-i-1;
       	sum[idx] = a[i] + b[i];
       	flag[idx] = (sum[idx] >= bound);
    }

    loop:for (int i=len; i<ARRAY_SIZE; i++)
    {
    	if (flag[len-1])
    		break;

    	shift1:for (int j=len-1; j>0; j--)
       		sum[j] = sum[j-1];

    	shift2:for (int j=len-1; j>2; j--)
    		flag[j] = flag[j-1];

       	sum[0] = a[i] + b[i];
       	flag[2] = (sum[2] >= bound);
    }

    return sum[len-1];
}
