#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define N 7

int main()
{
	int arr[N];
	srand(time(NULL));
	char sign;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (10);
		sign= rand() % (2);
		if (sign > 0)
			arr[i] *= (-1);
	}
	for (int i = 0; i < N; i++)
		printf("%d\t", arr[i]);

	printf("\nSummary is: %d\n", getSumInt(arr, N));

	return 0;
}