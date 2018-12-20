#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#include "task6.h"
//#define N 10

int main()
{
	int N = 0, *arr = 0;
	printf("Enter the amount of numbers in the array\n");
	scanf("%d", &N);
	arr = (int*)malloc(N * sizeof(int));
	printf("\n");
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (rand() % 41) - 20;
		printf("%d\n", arr[i]);
	}
	printf("\nThe sum between first minimal and first maximal elements of the array is %d\n", 
		getSumMaxMin(arr, N));
	free(arr);
	return 0;
}