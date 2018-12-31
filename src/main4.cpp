#include <stdio.h>
#include <string.h>
#include "task4.h"

#define N 256

int main()
{
	char buf[N];
	printf("Enter a string:\n");
	fgets(buf, N, stdin);

	
	printf("sum = %d", getSum(buf));

	return 0;
}