#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int  *elemenOfMassive(int *arr, int N)
{
	
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100 - 50;
		arr[N] = '\0';
		printf("%d ", arr[i]);
	}
	
	return arr;
}

int getSumMaxMin(int arr[], int N)
{
	int i=0, j=0, k=0, m=0, max=arr[0] , min=arr[0] , sum = 0;
	for (j = 0; j < N; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
			  k=j;
		}
		if (arr[j] < min)
		{
			min = arr[j];
			 m=j;
		}
	}
	if (k > m)
	{
		for (m = m + 1; m < k; m++)
			sum +=arr[m];
	}
	if (m > k)
	{
		for (k = k + 1; k < m; k++)
			sum+=arr[k];
	}
	
	printf("\n%d", sum);
	return sum;
}