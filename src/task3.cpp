#include<stdio.h>

int getMaxWord(char buf[], char word[])
{
	int a = 0, b=0, i, j;
	for (i=0; buf[i] != '\n'; i++)
	{
		if (buf[i] != ' ')
		{
			a++;
			if (a > b)
			{
				b = a;
				for (j = 0; j < b; j++)
					word[j] = buf[i - a + j + 1];
			}
		}
		else
			a = 0;	
		word[j] = '\0';
	}
	return b;
}