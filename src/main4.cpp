#include <stdio.h>
#include <string.h>
#include "task4.h"
#define N 256

int main()
{
	char buf[N];

	printf("Enter a string: ");
	fgets(buf, N, stdin);

	printf("%d\n", getSum(buf));
	
	getchar();
	return 0;
}