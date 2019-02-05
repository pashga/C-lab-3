#include "task3.h"
#include <stdio.h>
#define SIZE 256

int main()
{
	char word[SIZE], line[SIZE];
	printf("Just write something: ");
	gets(line);
	printf("\n%d\n",getMaxWord(line, word));
	puts(word);
}