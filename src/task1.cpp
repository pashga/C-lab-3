#include <stdio.h>
int wordCount(char buf[])
{
	int count = 0;
	int i = 0;
	for (i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ' ')
			count++;
	}
	if (buf[printf(buf)] != ' ')
		count++;
	return count;
}