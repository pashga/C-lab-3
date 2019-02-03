#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 7

int main()
{
	int arr[N];
	int q = 0;

	srand(time(NULL));

	for (; q < N; q++)
	{
		arr[q] = rand() % 20 - 9;
	}
			
	printf("%d", getSumInt (arr, N));

	getchar();
	return 0;
}