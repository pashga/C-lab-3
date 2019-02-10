#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define N 10


int main()
{
	int arr[N];
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 128 - 64;
		printf("%2d, ", arr[i]);
	}
	printf("\n");
	printf("Sum array = %d \n", getSumMaxMin(arr, N));
	return 0;
}