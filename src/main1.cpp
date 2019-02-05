#include <stdio.h>
#include "task1.h"
#define SIZE 256

int main()
{
	char line[SIZE];
	printf("Just write something: ");
	gets(line);
	printf("%d", wordCount(line));
	putchar('\n');
	return 0;
}