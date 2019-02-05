#include <stdio.h>
#include <string.h>
#define max_digit 10000000000
int getSum(char buf[])
{
	int count = strlen(buf) - 1;
	int summa = 0;
	while (count > 0)
	{
		if (buf[count] >= '0' && buf[count] <= '9')
		{
			for (int digit=1; buf[count] >= '0' && buf[count] <= '9' && digit < max_digit; count-- )
			{
				summa += (buf[count] -48)* digit;
				digit *= 10;
			}

		}
		else count--;
	}
	return summa;
}

