#include <stdio.h>
int wordCount(char buf[])
{
	for (int j = 0; buf[j] != '\0'; j++)//избавление от двух пробелов подрят
	{
		if (buf[j] == ' ' && buf[j + 1] == ' ')
		{
			for (int k = j; buf[k] != '\0'; k++)
			{
				buf[k] = buf[k + 1];
				j = 0;
			}
		}
	}
	while (buf[0] == ' ')//избавление от пробела в начале строки
		for (int k = 0; buf[k] != '\0'; k++)
		{
			buf[k] = buf[k + 1];
		}
	for (int len = printf(buf) - 1; len > 0; len--)//избавление от мусора в конце строки
	{
		if (buf[len] == ' ' || buf[len] == '\n')
			buf[len] = '\0';
		else break;
	}
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