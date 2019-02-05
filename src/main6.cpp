#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define LEN 256

int main()
{
	srand(time(0));
	int N = 0;
	int arr[LEN];
	printf("Enter N: ");
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int side = rand() % 2;
		int sign = 1;
		if (side == 1)
			sign = -1;
		arr[i] = (rand() % 10)*sign;
	}
	return 0;
}