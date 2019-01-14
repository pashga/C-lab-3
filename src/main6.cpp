#include "task6.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
//#define N 10
int generateMassiv(int arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		if (rand() % 2 == 0)
			arr[i] = rand() % 10;
		else
			arr[i] = (rand() % 10) * (-1);
		i++;
	}
	return 0;
}

int main()
{
	int N = 10;
	int *arr;
	arr = new int[N];
	srand(time(0));
	generateMassiv(arr, N);
	int i = 0;
	while (i < N)
	{
		printf("[%d]", arr[i]);
		i++;
	}
	printf("\n");
	printf("\nmax + min = %d", getSumMaxMin(arr, N));
	return 0;
}