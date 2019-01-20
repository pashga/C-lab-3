#include <stdio.h>
#include "task3.h"
#define N 256


int main()
{
	char buf[N] = { 0 };
	char word[N] = { 0 };
	puts("Enter a string:");
	fgets(buf, N, stdin);
	printf("The biggest word is :%sThe biggest word contain from %d letters", word,getMaxWord(buf,word));
	return 0;
}