#include <stdio.h>
#include <string.h>
#include "task3.h"

#define N 256

int main()
{
	char buf[N];
	char word[N];
	printf("Enter a string:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0 ';
	printf("%s %d", word, getMaxWord(buf, word));
	return 0;
}