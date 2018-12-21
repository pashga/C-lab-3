#pragma warning(disable:4996)
#include <stdio.h>
#include "task3.h"
#define sLMax 201 // max length of string


int main()
{
	char str[sLMax];
	char word[sLMax];

	printf("Enter  the string (<%d): ", sLMax - 1);
	fgets(str, sLMax, stdin);
	int i = 0; // убираем '\n' (можно strlen)
	for (; str[i] != '\n'; i++)
		;
	str[i] = '\0';

	printf("the string is: \"%s\"\n", str);
	printf("the LengthMaxWord is: %d\n", getMaxWord(str, word) );
	printf("the MaxWord is: \"%s\"\n", word);
	putchar('\n');
	return 0;
}