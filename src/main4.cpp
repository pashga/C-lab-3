#include <stdio.h>
#include <cstring>
#include "task4.h"
#define N 256


int main()
{
	char buf[N];
	printf("enter a value:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	
	printf("value: %d\n", getSum(buf));

	
	return 0;
}

