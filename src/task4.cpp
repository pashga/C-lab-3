#include "task4.h"

int getSum(char buf[])
{
	int sum = 0;
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			if (buf[i + 1] >= '0' && buf[i + 1] <= '9')
			{
				sum += ((int)buf[i] - 48) * 10 + ((int)buf[i+1] - 48);
				i++;
			}
			else sum += ((int)buf[i] - 48);
		}
	}
	return sum;
}