#include <stdio.h>
#define N 255
#include "task1.h"
char * clear(char * line)
{
	for (int j = 0; line[j] != '\0'; j++)
	{
		if (line[j] == ' ' && line[j - 1] == ' ')
		{
			for (int k = j; line[k] != '\0'; k++)
			{
				line[k] = line[k + 1];
				j = 0;
			}
		}
	}
	if (line[0] == ' ')
		for (int k = 0; line[k] != '\0'; k++)
		{
			line[k] = line[k + 1];
		}
	for (int len = printf(line)-1; len > 0; len--)
	{
		if (line[len] == ' ' || line[len]=='\n')
			line[len] = '\0';
		else break;
	}
	return 0;
}


int main()
{
	char buf[N];
	fgets(buf, 255, stdin);
	clear(buf);
	wordCount(buf);
	printf("\n%d words.\n", wordCount(buf));
	return 0;
}