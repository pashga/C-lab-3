#include <stdio.h>

int getSumInt(int arr[], int N) {

	int i = 0, sum = 0;
	int start, end;
	while (arr[i] >= 0)
		i++;
	start = i;
	i = N - 1;
	while (arr[i] <= 0)
		i--;
	end = i;
	for (i = start + 1; i <= end - 1; i++)
		sum += arr[i];
	return sum;
}