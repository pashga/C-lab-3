#include <stdio.h>
#include "task5.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define M 256
int * elemenOfMassive(int *arr, int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100 - 50;
		printf("%d ", arr[i]);
	}

	return arr;
}
int main()
{
	int N = 0;
	int arr[M] = { 0 };
	puts("Enter N:");
	scanf("%d",&N);
	elemenOfMassive(arr, N);
	getSumInt(arr, N);
	return 0;
}