#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

#define N 10

int main()

{
	int i, random;
	int arr[N] = { 0 };
	srand(time(0));
	for (i = 0; i < N; i++)
	{
		random = rand() % 2;
		if (random == 0)
			arr[i] = (rand() % 10)*(-1);
		else if (random == 1)
			arr[i] = rand() % 10;
		printf("%d", arr[i]);
	}

	putchar('\n');

	printf("Summa=%d", getSumInt(arr, N));
	return 0;
}

