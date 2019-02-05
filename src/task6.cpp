#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
	int max = 0, min = 0, i = 0, start = 0, end = 0,summa=0;
	while (i < N)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			start = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			end = i;
		}
		i++;
	}
	printf("max(%d) = %d \t min(%d) = %d", start, max, end, min);
	if (start > end)
	{
		i = end;
		end = start;
		start = i;
	}
	start++;
	while (start < end)
	{
		summa += arr[start];
		start++;
	}
	return summa;

}