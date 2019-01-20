#include <stdio.h>
#include "task1.h"
#define N 255

int main()
{
	char buf[N] = { 0 };
	
	fgets(buf, N, stdin);
	wordCount(buf);
	printf("%d", wordCount(buf));
	return 0;
}