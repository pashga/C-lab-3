#include "task5.h"
#include <stdlib.h>
#include <time.h>
//#include <stdio.h>

int * positNegatArray(int * arr, int N) // заполнение массиво положительными и отрицательными числами (почти поровну)
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


int getSumInt(int arr[], int N) // нахождение суммы в массиве arr длины N
{
	int first_negative = 0;
	int last_positive = 0;
	
	int i = 0;
	while (i < N)
	{
		if (arr[i] < 0)
		{
			first_negative = arr[i];
			break;
		}
		else
			i++;
	} 
	//printf("%d\n", first_negative);


	int j = N - 1;
	while (j > i)
	{
		if (arr[j] > 0)
		{
			last_positive = arr[j];
			break;
		}
		else
			j--;
	} 
	//printf("%d\n", last_positive);

	
	int sum = 0;
	i++;
	while (i < j)
	{
		sum += arr[i++];
	}

	return sum;
}