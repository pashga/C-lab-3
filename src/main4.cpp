#include <stdio.h>
#include "task4.h"
#define N 256

int main()
{
	char buf[N];
	printf("Enter your string:\n");
	fgets(buf, N, stdin);
	printf("%d", getSum(buf));
	return 0;
}