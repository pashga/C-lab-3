#include<stdio.h>
#include"task1.h"
#define N 256

int main()
{
	char buf[N];
	printf("Enter a string:\n");
	fgets(buf,N,stdin);
	printf("Number of words=%d\n", wordCount(buf));
	return 0;
}