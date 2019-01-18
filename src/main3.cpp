#include <stdio.h>
#include "task3.h"
#include <locale>
#define N 256

int main()
{
	char buf[N];
	char word[N] = { 0 };

	setlocale(LC_ALL, "Rus");
	printf("¬ведите строку: ");
	fgets(buf, N, stdin);

	printf("%s = %d", word, getMaxWord(buf, word));
	getchar();
	return 0;
}