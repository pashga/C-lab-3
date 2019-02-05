#include <stdio.h>
#include <string.h>

int wordCount(char buf[])
{
	unsigned int count = 0;

	char flag = 0; // in word flag = 1, out flag = 0

	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] != ' ' && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (buf[i] == ' ' && flag == 1)
			flag = 0;
		
	}
	return count;
}