#include <stdio.h>
#include <string.h>
#define N 256

int getMaxWord(char buf[], char word[])
{
	int max_count = 0, count=0, i=0;
	char temp_word[N];

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	while (buf[i] != '\0')
	{
		if (buf[i] != ' ')
		{
			int j = 0;
			while (buf[i] != ' ' && buf[i] != '\0')
			{
				temp_word[j] = buf[i];
				count++;
				i++;
				j++;
			}
			temp_word[j] = '\0';
			if (count > max_count)
			{
				max_count = count;
				sprintf(word, "%s", temp_word);
			}
			count = j = 0;
		}
		else if (buf[i] == ' ')
		{
			while (buf[i] == ' ')
				i++;
		}
	}
	return max_count;
}