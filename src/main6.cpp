#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

int main()
{
	const int N = 10;
	int arr[N];
	int i = 0;
	srand(time(0));

	for (i = 0; i < N; i++)
		arr[i] = rand() % 21 - 10;

	printf(" = %d", getSumMaxMin(arr, N));
	return 0;
}