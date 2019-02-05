#include <stdio.h>
#include "task1.h"
#define N 256

int main()
{
	char buf[N];
	printf("Enter your string: ");
	fgets(buf,N,stdin);
	int count = wordCount(buf);
	printf("Words in your string: %d", count);
	return 0;
}