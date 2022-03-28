#include "kernel6.h"

int kernel6(int x)
{
    int i=0;
    loop:while(i*i < x)
        i++;
    return i;
}
