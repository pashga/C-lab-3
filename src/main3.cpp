#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	int wordLength = 0;
	char buf[SIZE] = { 0 };
	char word[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(buf, SIZE, stdin);
	getMaxWord(buf, word);
	printf("\nThe longest word in the string is %s", word);
	printf(" with the length of %d symbols", getMaxWord(buf, word));
	return 0;
}