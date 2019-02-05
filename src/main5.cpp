#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#include "task5.h"
#define N 10

int main()
{
	int arr[N] = { 0 };
	
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = (rand() % 41) - 20;
		printf("%d\n", arr[i]);
	}
	printf("\nThe sum between first negative and last positive elements of the array is %d\n",
		getSumInt(arr, N));
	return 0;
}