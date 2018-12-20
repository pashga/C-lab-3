#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{

	char buf[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(buf, SIZE, stdin);
	printf("\nThe amount of words is %d", wordCount(buf));
	return 0;
}