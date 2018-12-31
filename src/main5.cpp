#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

#define N 10

int main()
{
	int i, rnd;
	int arr[N] = { 0 };
	srand(time(0));
	for (i = 0; i < N; i++)
	{
		rnd = rand() % 2;
		if (rnd == 0)
			arr[i] = (rand() % 10)* (-1);
		else if (rnd == 1)
			arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	putchar('\n');
	printf("Sum = %d", getSumInt(arr, N));
	return 0;
}