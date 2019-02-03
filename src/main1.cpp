#include <stdio.h>
#include "task1.h"
#include <string.h>
#define N 256

int main()
{
	char buf[N];
	int count = 0;

	printf("Enter a string\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')  
		buf[strlen(buf) - 1] = '\0';

	printf("Count of worlds: %d", wordCount(buf));

	return 0;
}