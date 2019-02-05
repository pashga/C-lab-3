#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int minInd = 0, maxInd = 0;
	for (int i = 1; i < N; i++)
	{
		if (arr[i] < arr[minInd])
			minInd = i;
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > arr[maxInd])
			maxInd = i;
	}
	if (minInd < maxInd)
	for (int i = minInd + 1; i < maxInd; i++)
		sum += arr[i];
	else
	for (int i = maxInd + 1; i < minInd; i++)
		sum += arr[i];
	return sum;
}