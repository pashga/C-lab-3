#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 100
#define IN 1
#define OUT 0

int getMaxWord(char buf[], char word[])
{
	int inWord = OUT; // are we in word (1) or not in word (0)
	int letters = 0;
	int max = 0;
	char max_word[SIZE] = { '\0' };
	int i = 0, j = 0, k = 0;



	while (i < strlen(buf))
	{
		if (buf[i] != ' ' && inWord == OUT)
		{

			inWord = IN;
			max_word[j] = buf[i];
			j++;
		}
		else if (buf[i] != ' ' && inWord == IN)
		{
			max_word[j] = buf[i];
			j++;
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && inWord == IN)
		{
			inWord = OUT;
			j = 0;
		}
		if (strlen(max_word) > strlen(word))
		{
			int len = strlen(max_word);
			for (k = 0; k <= len; k++)
				word[k] = max_word[k];
		}

		i++;
	}
	return strlen(word);
}



/*
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
*/