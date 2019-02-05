#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
	int i, j = 0, k = 0, sum = 0, max = 0, min = 0;

	for (i = 0; i < N; i++)
	{
		if (arr[i] >= max)
			max = arr[i];
		else if (arr[i] <= min)
			min = arr[i];
	}
	printf("min = %d max = %d\n", min, max);


	for (i = 0; i < N; i++)
	{
		if (arr[i] != max)
			k++;
		else
			break;
	}
	for (i = 0; i < N; i++)
	{
		if (arr[i] != min)
			j++;
		else
			break;
	}

	if (k < j)
	{
		for (i = k+1; i < j; i++)
			sum += arr[i];
	}
	else
	{
		for (i = j+1; i < k; i++)
			sum += arr[i];
	}
	return sum;
}
