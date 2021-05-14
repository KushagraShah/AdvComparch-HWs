#include "kernel6.h"

int kernel6(int x)
{
    int i=0;
    loop:for (i=0; ; i++)
    {
    	if (i*i >= x)
    		break;
    }

    return i;
}
