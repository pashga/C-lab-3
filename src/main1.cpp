#include <stdio.h>
#include "task1.h"
#include <string.h>
#define N 256

int main()
{
	char buf[N] = { 0 };
	fgets(buf, N, stdin);
	if (buf[strlen(buf)-1]=='\n')
		buf[strlen(buf)-1]='\0';
	wordCount(buf);
	printf("%d", wordCount(buf));
	return 0;
}