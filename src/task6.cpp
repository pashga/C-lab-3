#include "task6.h"
#include <stdlib.h>
#include <time.h>
//#include <stdio.h>

int * positiveNegativeArray(int * arr, int N) // заполнение массиво положительными и отрицательными числами (почти поровну)
{
	srand(time(NULL));

	for (int i = 0; i < N; i++)
	{
		switch (rand() % 2)
		{
		case 0:
		{
			arr[i] = rand() % 100;
		}
		break;
		case 1:
		{
			arr[i] = -(rand() % 100);
		}
		break;
		}
	}

	return arr;
}


int getSumMaxMin(int arr[], int N) // нахождение суммы в массиве arr длины N
{
	int first_max = 0;
	int first_min = 0;

	int i = 0;
	int j = 0;
	int k = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < first_min)
		{
			first_min = arr[i];
			j = i;
		}
		else if (arr[i] > first_max)
		{
			first_max = arr[i];
			k = i;
		}
	}
	//printf("%d   %d\n", first_min, first_max);


	int sum = 0;
	if (j < k)
	{
		j++;
		while (j < k)
		{
			sum += arr[j++];
		}
	}
	else if (k < j)
	{
		k++;
		while (k < j)
		{
			sum += arr[k++];
		}
	}
	
	return sum;
}