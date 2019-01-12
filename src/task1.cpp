#include<stdio.h>

int wordCount(char buf[])
{
	int value = 0, i = 0;
	if (buf[i] > '0')
		value = 1;
	if (buf[i] > '0' && buf[i + 1] == ' ')
		value++;
	while (buf[i] != '\0')
	{
		if (buf[i] == ' ' && buf[i + 1] > '0')
			value++;
		i++;
	}
	return value;
}