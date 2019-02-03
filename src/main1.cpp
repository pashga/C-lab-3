#include <stdio.h>
#include <string.h>
#include "task1.h"
#define N 256

int main()
{
	char buf[N];

	printf("Enter a string: ");
	fgets(buf, N, stdin);

	printf("%d", wordCount (buf));

	getchar();
	return 0;
}
