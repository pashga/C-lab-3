#include "task1.h"

int wordCount(char buf[])
{
	int count = 0, flag = 0;
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (buf[i] == ' ' && flag == 1)
			flag = 0;
	}
	return count;
}