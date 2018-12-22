#include "task6.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 7

int main()
{
	int arr[SIZE];
	srand(time(0));
	printf("base array:\n");
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 - 4;
		printf("%d\t", arr[i]);
	}
	printf("\nsum between first minimum and first maximum numbers: %d\n", getSumMaxMin(arr, SIZE));
	return 0;
}