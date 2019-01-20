#include <stdio.h>
#include "task3.h"
#include <stdlib.h>
#include <string.h>
#define N 256


int main()
{
	char buf[N] = { 0 };
	char word[N] = { 0 };
	puts("Enter a string:");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	printf("The biggest word is :%s The biggest word contain from %d letters", word,getMaxWord(buf,word));
	return 0;
}