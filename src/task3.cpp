#include "task3.h"
#include <ctype.h> // for isspace()
#include <stddef.h>


int getMaxWord(char buf[], char word[])
{
	int inWord = 0; // are we in word (1) or not in word (0)
	int letter_count = 0;
	int max_letters = 0;
	char * ptr = NULL;


	for (int i = 0; buf[i]; i++)
	{
		if (!isspace(buf[i]) && inWord == 0) // we entered the word
		{
			inWord = 1;

			letter_count++;

		}
		else if (!isspace(buf[i]) && inWord == 1) // we are in the word
		{
			letter_count++;
		}
		else if ((isspace(buf[i]) || buf[i] == '\n' || buf[i] == 'EOF') && inWord == 1) // we're out of the word
		{
			inWord = 0;
			if (letter_count > max_letters)
			{
				max_letters = letter_count;
				ptr = &buf[i - max_letters];
			}
			letter_count = 0;
		}
	}

	int i = 0;
	while (i<max_letters)
	{
		word[i++] = *ptr;
		ptr++;
	}
	word[i] = '\0';

	return max_letters;
}