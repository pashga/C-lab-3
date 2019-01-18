#include <stdio.h>
#include "task4.h"
#include <locale>
#define N 256

int main()
{
	char buf[N];

	setlocale(LC_ALL, "Rus");
	printf("¬ведите строку: ");
	fgets(buf, N, stdin);

	printf("%d", getSum(buf));
	return 0;
}