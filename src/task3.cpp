#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int i = 0, k = 0, q, j, max = 0, countWord = 0, str = 0;
	str = strlen(buf);

	for (i; i < str + 1; i++)
	{
		if (buf[i] != ' '&&buf[i] != '\0')
			countWord++;
		else
		{

			if (countWord >= max)
			{
				max = countWord;
				k = i - max;
				for (q = k, j = 0 ; j < max; j++, q++)
					word[j] = buf[q];
				word[j] = '\0';
			}
			countWord = 0;
		}
	}
	return max;
}