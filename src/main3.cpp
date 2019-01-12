#include<stdio.h>
#include<string.h>
#include "task3.h"
#define N 256

int main()
{
	char buf[N];
	char word[N]; 
	printf("Enter a string:\n");
	fgets(buf, N, stdin);
	printf("%s-%d\n", word, getMaxWord(buf,word));
	return 0;
}