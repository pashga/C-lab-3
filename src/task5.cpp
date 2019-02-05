#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getSumInt(int arr[], int N)
{
	int i = 0;
	int j = N;
	int sum=0;

	while (i < N)
	{
		if (arr[i] < 0)
			break;
		else
			i++;
	}

	while (j >= 0)
	{
		if (arr[j] > 0)
			break;
		else
			j--;
	}
	i++;
	j--;

	while (i <= j)
	{
		sum = sum + arr[i];
		i++;
	}
	return sum;
}