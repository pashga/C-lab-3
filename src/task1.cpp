#include <string.h> 
#include "task1.h"

int wordCount(char buf[])

{
	int length = strlen(buf);

	int from = 0, count = 0;

	for (int i = 0; i <= length-1; i++)
	{
		if ((buf[i] != ' ') && (buf[i + 1] == ' '))
		{
			count++;
		}
		else if ((buf[i] != ' ') && (buf[i + 1] == '\n'))
			{
				count++;
			}
		else if ((buf[i] != ' ') && (buf[i] != '\n') && (buf[i + 1] == '\0'))
		{
			count++;
		}
		else
			continue;
	}
	return count;
}