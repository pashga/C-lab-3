#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256

int main()
{
	char word[N];
	char buf[N];

	printf("Enter a string: ");
	fgets(buf, N, stdin);
	
	printf("%d\n", getMaxWord(buf, word));
	puts(word);

	getchar();
	return 0;
}