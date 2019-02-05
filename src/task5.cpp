#include "task4.h"

int getSumInt(int arr[], int N)
{
	int sum = 0, negInd = 0, posInd = N;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			negInd = i;
			break;
		}
	}
	for (int i = N-1; i != 0; i--)
	{
		if (arr[i] > 0)
		{
			posInd = i;
			break;
		}
	}
	for (int i = negInd + 1; i < posInd; i++)
		sum += arr[i];
	return sum;
}