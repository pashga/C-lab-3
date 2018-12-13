#include <stdio.h>
#include <cstring>
#include "task1.h"
#define N 256



int main()
{
	char buf[N];
	printf("enter a string:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	
	
	printf("world: %d\n", wordCount(buf));
	return 0;
}
