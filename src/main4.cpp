#include <stdio.h>
#include <string.h>
#include "task4.h"

#define N 256

int main()

{
	char buf[N];
	printf("Vvedite stroku:\n");
	fgets(buf, N, stdin);

	printf("sum=%d", getSum(buf));

	getchar();
	
	return 0;
}