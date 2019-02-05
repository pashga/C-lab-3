#include <stdio.h>
#include "task4.h"
#define N 256

int main()
{
	char buf[N];

	printf("Enter a string: ");
	fgets(buf, N, stdin);	
	
	printf("%d", getSum(buf));
	return 0;
}