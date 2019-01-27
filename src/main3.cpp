#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
	char buf[N];
	char word[N];
	fgets(buf, N, stdin);
	int count = getMaxWord(buf, word);
	printf("%s\t-\t%d", word, count);
	return 0;
}