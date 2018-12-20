#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main()
{
	char buf[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(buf, SIZE, stdin);
	printf("\nThe sum is %d, the limit is two number of digits", getSum(buf));
	return 0;
}