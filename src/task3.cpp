#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int i = 0, countOfLetters = 0, lenghtOfString = 0;
	char *plump = strtok(buf, " ");

	while (plump != '\0')
	{
		lenghtOfString = strlen(plump);
		if (lenghtOfString > countOfLetters)
		{
			strcpy(word, plump);
			countOfLetters = lenghtOfString;
		}
		plump = strtok(0, " ");
		i++;

	}
	return countOfLetters-1;
}