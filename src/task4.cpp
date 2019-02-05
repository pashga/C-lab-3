#include <string.h>

int getSum(char buf[])
{
	int sum=0, i=0;
	const int max_value = 99999999;

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			int value = 0;
			while (buf[i] >= '0' && buf[i] <= '9' && buf[i] && value < max_value)
			{
				value = value * 10 + (buf[i] - '0');
				i++;
			}
			sum += value;
		}
		else if (buf[i] < '0' && buf[i] > '9')
		{
			while (buf[i] < '0' && buf[i] > '9' && buf[i])
			{
				i++;
			}
		}
		i++;
	}
	return sum;
}