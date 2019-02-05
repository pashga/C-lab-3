#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "task4.h"

int getSum(char buf[])

{
	int i = 0, j = 0, arrInteger = 0, sum = 0;

	for (i = 0; i < strlen(buf); i++)
	{

		while (isdigit(buf[i]))
		{
			int atoi(char buf);
			arrInteger = buf[i] - ASCII;
			if(isdigit(buf[i+1]))
			{
				arrInteger = arrInteger * 10;
			}
			sum += arrInteger;
			i++;
		}
		arrInteger = 0;

	}
	return sum;
}