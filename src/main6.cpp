#include <stdio.h>
#include<stdlib.h>
#include "task6.h"
#include<time.h>
#define N 10

int main()
{
	srand(time(0));
	int arr[N];
	for (int i = 0; i < N; i++)
		arr[i] = (rand() % 10)* (rand() % 2 ? 1 : -1);

	for (int i = 0; i < N; i++)
		printf("%02d ", arr[i]);
	putchar('\n');

	printf("sum:%d\n", getSumMaxMin(arr, N));
	return 0;
}