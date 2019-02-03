#include <stdio.h>
#include "task3.h"
#include <string.h>
#define N 256

int main()
{
	char buf[N] = { 0 };
	char word[N] = { 0 };
	int j = 0;
	int charCount = 0;
	int i = 0;
	int inWord = 0;
	int wordCount = 0;


	printf("Enter a string\n");
	fgets(buf, N, stdin);


	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	   
	printf("%s\t%d\n", word, getMaxWord(buf, word));

	return 0;
}