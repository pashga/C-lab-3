#include<stdio.h>
#include<stdlib.h>
#include "task4.h"
#define N 100

int main()
{
	char buf[N];
	printf("Enter a string:\n");
	fgets(buf, N, stdin);
	printf("%d", getSum(buf));
	return 0;
}