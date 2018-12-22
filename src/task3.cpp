#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int size = 0, temp = 0;
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ')
		{
			temp++;
			if (size < temp)
			{
				size = temp;
				for (int j = 0; j < size; j++)
				{
					word[j] = buf[i - (size-1 - j)];
				}
			}
		}
		if (buf[i] == ' ')
		{
			temp = 0;
		}
	}
	word[size] = '\0';
	return size;
}