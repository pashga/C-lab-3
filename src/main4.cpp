#include "task4.h"
#include <stdio.h>
#define N 255
int main()
{
	char buf[N];
	int summa = 0;
	fgets(buf, N, stdin);
	printf("%d", getSum(buf));
	return 0;
}