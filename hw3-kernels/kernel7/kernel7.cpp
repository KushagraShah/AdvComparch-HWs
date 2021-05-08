#include "kernel7.h"

float kernel7(float a[ARRAY_SIZE], float b[ARRAY_SIZE])
{
    float sum = 0;

    loop:for(int i=0; i<ARRAY_SIZE; i++)
    {
        float diff = a[i] - b[i];
//        float tmp = diff * (diff > 0);

        float possible = sum + diff;

        if (diff > 0)
        {
        	sum = possible;
        }

//        sum = sum + tmp;
    }
//    loop:for(int i=0; i<ARRAY_SIZE; i++)
//    {
//        float diff = a[i] - b[i];
//        bool pred = (diff > 0);
//
//        sum = sum + diff*pred;
//    }
//    loop:for(int i=0; i<ARRAY_SIZE; i++)
//    {
////    	bool pred = (a[i] > b[i]);
////    	sum = sum + (a[i] - b[i]) * pred;
//    	if (a[i] > b[i])
//    	{
//    		sum = sum + (a[i] - b[i]);
//    	}
//    }
//    loop:for(int i=0; i<ARRAY_SIZE; i++)
//    {
//        float diff = a[i] - b[i];
//        if (diff > 0)
//            sum = (sum + diff);
//    }
    return sum;
}
