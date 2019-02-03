#include <stdio.h>

int getMaxWord(char buf[], char word[])
{
	int i = 0, max = 0,j;
	char cur[300];
	while (buf[i])
	{
		if (buf[i] != ' ')
		{
			j = i;
			while (buf[i]&&buf[i] != ' ')
			{
				cur[i - j] = buf[i];
				i++;
			}
			if (i - j > max)
			{
				max = i - j;
				cur[i - j] = '\0';
				sprintf(word, "%s", cur);
			}
		}
		if (!buf[i])
			break;
		i++;
	}
	
	return max;
}