/*
	Ќаписать программу, котора€ формирует целочисленный массив размера N,
	а затем находит сумму элементов, расположенным между первым отрицательным
	и последним положительным элементами.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"
#define N 30
#define TRANSFER 15 

int main()
{
	int arr[N];
	positNegatArray(arr, N);

	printf("Array: \n");
	for (int i = 0, count = 1; i < N; i++, count++)
	{
		printf("%4d ", arr[i]);
		if (count % TRANSFER == 0)
			printf("\n");
	}

	printf("\n\n");

	printf("The sum of the elements, located between \n"
		"the first negative and last positive elements: %d \n\n", getSumInt(arr, N));

	return 0;
}