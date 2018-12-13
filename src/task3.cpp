#include <stdio.h>
#include <cstring>
#define N 256

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, spacecounter = 0, countletters = 0, max = 0;
	char  cur[N];
	while (buf[i] != '\0')
	{
		if (buf[i] != ' ')
		{
			cur[j] = buf[i];
			spacecounter = 0;
			countletters++;
			j++;

		}

		else
		{
			if (spacecounter == 0)
				j = 0;
			if (max < countletters)
				sprintf(word, "%s", cur), max = countletters;
			spacecounter++;
			countletters = 0;
		}

		i++;

	}
	if (max < countletters)
		sprintf(word, "%s", cur), max = countletters;
	word[max] = '\0';
	return max;
}