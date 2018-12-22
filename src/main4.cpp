#include "task4.h"
#include <stdio.h>
#define SIZE 256

int main()
{
	char line[SIZE];
	printf("Get sum of two-digits numbers: ");
	gets(line);
	printf("%d", getSum(line));
	return 0;
}