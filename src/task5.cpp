#include <stdio.h>
int getSumInt(int arr[], int N)
{
	int end = N;
	while (arr[end] < 0)
		end--;
	int start = 0;
	while (arr[start] >= 0)
		start++;
	int summa = 0;
	while (start <= end)
	{
		summa += arr[start];
		start++;
	}

	return summa;
}
