#include <stdio.h>
int getMaxWord(char buf[], char word[])
{
	int LengthMaxWord = 0;
	int wordBegin = 0;
	short flag = 0;
	int i = -1;
	do
	{
		i++;
		if (buf[i] != ' ' && buf[i] != '\0' && flag == 0)
		{
				wordBegin = i;
				flag = 1;
		}

		if ((buf[i] == ' ' || buf[i] == '\0') && flag == 1 )
		{
			flag = 0;
			if (LengthMaxWord< i - wordBegin)
			{
				LengthMaxWord = i - wordBegin;
				int j = 0;
				for (; j < LengthMaxWord; j++)
				{
					word[j] = buf[wordBegin + j];
				}
				word[j] = '\0';
			}
		}
	} while (buf[i] != '\0');
	if (LengthMaxWord == 0)
	{
		printf("\nWhere is no word in this string!\n");
		word[0] = '\0';
	}
	return LengthMaxWord;
}
