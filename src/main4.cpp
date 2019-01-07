#include <stdio.h>
#include <string.h>
#include "task4.h"
#define N 256

int main()
{
	char buf[N];

	printf("Enter a string:\n");
	fgets(buf, N, stdin);

	printf("Summary is: %d \n", getSum(buf));

	return 0;
}