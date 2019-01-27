#include <stdio.h>
int getSumMaxMin(int arr[], int N)
{
	int sum = 0, i = 0, j = 0,k = 0, max_value = 0, min_value = 0;
	while (i < N)
	{
		if (arr[i] > max_value)
		{
			max_value = arr[i];
			k = i;
		}
		if (arr[i] < min_value)
		{
			min_value = arr[i];
			j = i;
		}
		i++;
	}
	if (j < k)
	{
		j++;
		k--;
		while (j < k)
		{
			sum += (arr[j] + arr[k]);
			j++;
			k--;
		}
		if (j == k)
			sum += arr[j];
	}
	else if (k < j)
	{
		k++;
		j--;
		while (k < j)
		{
			sum += (arr[j] + arr[k]);
			k++;
			j--;
		}
		if (j == k)
			sum += arr[j];
	}
	return sum;
}