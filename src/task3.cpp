#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	char flag = 0; // in word flag = 1, out word flag = 0
	unsigned int wordCount = 0;
	
	for (int i = 0; i <= strlen(buf); i++)
	{
			if (buf[i] == '\0' && flag == 1)
			{
				if (wordCount > strlen(word))
				{
					unsigned int k = i-wordCount;
					for (int j = 0; j < wordCount; j++)
					{
						word[j] = buf[k];
						k++;
					}
				}
			}
			else if (buf[i] != ' ' && flag == 0)
			{
				flag = 1;
				wordCount++;
			}
			else if (buf[i] != ' ' && flag == 1)
				wordCount++;

			else if (buf[i] == ' ' && flag == 1)
			{
				flag = 0;
				if (wordCount > strlen(word))
				{
					unsigned int k = i - wordCount;
					for (int j = 0; j < wordCount; j++)
					{
						word[j] = buf[k];
						k++;
					}
				}
				wordCount = 0;
			}
	}
		return strlen(word);
}