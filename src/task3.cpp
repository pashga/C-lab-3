#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int j , k = 0, q, max = 0, countLetter = 0, str = 0;
	str = strlen(buf);
	for (int i = 0; i < str; i++)
	{
		if (buf[i] != ' ')
			countLetter++;
		else if (buf[i] == ' ' || buf[i] == '\0')
		{
			if (countLetter >= max)
			{
				max = countLetter;
				k = i - max;
				for (q = k, j = 0; j < max; j++, q++)
					word[j] = buf[q];
				word[j] = '\0';
			}
			countLetter = 0;
		}

	}
	return max;
}