#pragma warning(disable:4996)
#include <stdio.h>
#include "task6.h"
#include <time.h>
#include <stdlib.h>
#define N 10 //lenght of array
#define  RANGE 50 //range of numbers in array
int main()
{
	srand(time(NULL));
	rand();
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() %(2*RANGE) - RANGE;
		printf("%3d ", arr[i]);
	}
	printf("\nThe sum between the first minimum element and the first maximum element is: %d\n", getSumMaxMin(arr, N));
	return 0;
}