#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
	int max = 0, min = 0, i = 0;
	while (i < N)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	printf("max = %d \t min = %d", max, min);
	return max + min;
}