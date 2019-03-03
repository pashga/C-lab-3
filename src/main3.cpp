#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256

int main()
{
	char buf[N];
	char word[N] = { 0 };
	int len = 0;

	printf("Enter a string\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	len = getMaxWord(buf, word);
	printf("The longest word has %d letters and it is:\n", len);
	puts(word);
	putchar('\n');

	return 0;
}