#include "kernel8.h"

void kernel8(int array[ARRAY_SIZE], int multiplier, int offset)
{
    int tmp[4] = {array[2], array[3], array[4], array[5]};
    int flag = (offset > 2) & (offset < 5);
    int result, rd_val;

	loop:for (int i=6; i<ARRAY_SIZE-1-offset; i++)
    {
		if (flag)
			rd_val = tmp[offset-2];
		else
			rd_val = array[i-6+offset];

		tmp[0] = tmp[1];
		tmp[1] = tmp[2];
		tmp[2] = tmp[3];
		tmp[3] = rd_val * multiplier;

		array[i] = tmp[3];
    }
}
