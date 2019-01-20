#include <stdio.h>
#include "task4.h"

int main()
{
	char buf[N] = { 0 };
	fgets(buf, N, stdin);
	printf("%d", getSum(buf));
	return 0;
}
