#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

int main()
{
	srand(time(NULL));
	int  arr[BUFF] = { 0 };
	int N = BUFF;
	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 2;
		if (a == 0)
			arr[i] = (rand() % 10 + 1);         // положительные числа
		if (a == 1)
			arr[i] = -(rand() % 10 + 1);		// отрицательные числа

	}
	printf("The array is: \n");
	for (int i = 0; i < BUFF; i++)
	{
		printf("%4d", arr[i]);
	}

	printf("\nSumma is %d\n", getSumMaxMin(arr, N));

	return 0;
}