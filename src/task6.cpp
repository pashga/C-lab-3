#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getSumMaxMin(int arr[], int N)
{
	int i = 1;
	int min=arr[0];
	int minNumber = 0;
	int max=arr[0];
	int maxNumber = 0;
	int sum=0;

	while (i < N)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minNumber = i;
		}

		if (arr[i] > max)
		{
			max = arr[i];
			maxNumber = i;
		}
		
		i++;
	}

	if (minNumber < maxNumber)
	{
		for (int j = minNumber + 1; j < maxNumber; j++)
			sum = sum + arr[j];
	}
	else
	{
		for (int j = maxNumber + 1; j < minNumber; j++)
			sum = sum + arr[j];
	}

	printf("\nMinimum value = %d\nMaximum value = %d", min, max);
	
	return sum;
}