#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task5.h"


int * elemenOfMassive(int *arr,int N)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100 - 50;
		printf("%d ", arr[i]);
	}

	return arr;
}

int getSumInt(int arr[], int N)
{
	int i, j, k, con, index, sum = 0;
	for (j = 0; j < N; j++)
	{
		if (arr[j] < 0)
		{
			index = j;
			break;
		}
	}
	for (int k = 0; k < N; k++)
	{
		if (arr[k] < 0)
		{
			continue;
		}
		if (arr[k] > 0)
			con = k;
	}
	for (index; index <= con; index++)
	{
		sum += arr[index];
	}
	printf("\n%d", sum);
	return sum;

}
