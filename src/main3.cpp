#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
	char buf[N];
	char word[N] = { 0 };

	printf("Enter a string: ");
	fgets(buf, N, stdin);
	
	printf("%s = %d", word, getMaxWord(buf,word));
	getchar();
	return 0;
}