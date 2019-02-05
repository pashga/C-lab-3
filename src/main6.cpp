/*
	Написать программу, которая формирует целочисленный массив размера N,
	а затем находит сумму элементов между первым минимальным и первым максимальным элементами.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#define N 30
#define TRANSFER 15 

int main()
{
	int arr[N];
	positiveNegativeArray(arr, N);

	printf("Array: \n");
	for (int i = 0, count = 1; i < N; i++, count++)
	{
		printf("%4d ", arr[i]);
		if (count % TRANSFER == 0)
			printf("\n");
	}

	printf("\n\n");

	printf("The sum of the elements, located between \n"
		"the minimum and maximum elements: %d \n\n", getSumMaxMin(arr, N));

	return 0;
}