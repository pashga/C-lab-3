#include <stdio.h>

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, k = 0, max = 0, countLetter = 0;
	for (i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ')
			countLetter++;
		else if (buf[i] == ' ')
		{
			if (countLetter > max)
			{
				max = countLetter;
				k = i - max;
				for (j = 0, i = k; j < max; j++, i++)
					word[j] = buf[i];
				word[j] = '\0';
			}
			countLetter = 0;
		}
		
	}
	return max;
}