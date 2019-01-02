/*
	Написать программу, которая для введённой строки определяет 
	количество слов и выводит каждое слово на отдельной строке 
	и его длину.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // for isspace()
#define SIZE 100

int wordAndLetterCount(char buf[]) // word Count And Word Print And Letter Count
{
	int inWord = 0; // are we in word (1) or not in word (0)
	int word_count = 0;
	int letter_count = 0;


	for (int i = 0; buf[i]; i++)
	{
		if (!isspace(buf[i]) && inWord == 0) // we entered the word
		{
			inWord = 1;
			word_count++;
			letter_count++;
			printf("%c",buf[i]);
		}
		else if (!isspace(buf[i]) && inWord == 1) // we are in the word
		{
			letter_count++;
			printf("%c", buf[i]);
		}
		else if ((isspace(buf[i]) || buf[i] == '\n' || buf[i] == 'EOF') && inWord == 1) // we're out of the word
		{
			inWord = 0;
			printf(" - %d letters\n", letter_count);
			letter_count = 0;
		}

	}
	return word_count;
}

int main()
{
	char str[SIZE];

	printf("Please, enter the string: \n\n");
	fgets(str, SIZE, stdin);
	puts("");

	printf("\nNumber of words in your string: %d\n\n", wordAndLetterCount(str));
	return 0;
}