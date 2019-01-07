#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getSumMaxMin(int arr[], int N)
{
	int i = 1;
	int min=arr[0];
	int max=arr[0];

	while (i < N)
	{
		if (arr[i] < min)
			min = arr[i];

		if (arr[i] > max)
			max = arr[i];

			i++;
	}
	printf("\nMinimum value = %d\nMaximum value = %d", min, max);
	
	return min+max;
}