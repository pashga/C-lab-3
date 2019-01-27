#include <stdio.h>
int getSumInt(int arr[], int N)
{
	int sum = 0, i=0;
	int j = N;
	while (arr[i] >= 0 && i < N)
		i++;
	i++;
	while (arr[j] < 0 && j>0)
		j--;
	j--;
	while (i < j)
	{
		sum +=(arr[i] + arr[j]);
		i++;
		j--;
	}
	if (i == j)
		sum += arr[i];
	return sum;
}