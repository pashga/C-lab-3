#include "task4.h"
#include <ctype.h> // for isdigit()


int getSum(char buf[])
{
	int value = 0;
	int count = 0; // to count the number of digits in a number
	int sum = 0;
	int i = 0;

	while (buf[i])
	{
		if (!isdigit(buf[i]))
		{
			i++;
			continue;
		}
		while (isdigit(buf[i]))
		{
			value = value * 10 + buf[i] - '0';
			count++;
			i++;
			if (count == 5)
				break;
		}
		sum += value;
		value = 0;
		count = 0;
	}
	return sum;
}