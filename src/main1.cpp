#include <stdio.h>
#include <string.h>
#include "task1.h"

#define N 256

int main()
{
	char buf[N];
	printf("Enter a string:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("words: %d\n", wordCount(buf));
	return 0;
}