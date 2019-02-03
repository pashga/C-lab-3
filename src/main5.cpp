#include <stdio.h>
#include "task5.h"
#include <stdlib.h>
#include <time.h>
#define N 7

int main()
{
	int arr[N];
	srand(time(0));
	int number = 0;
	
	for (int i = 0; i < N; i++)  //filling the array with random numbers
		{
		number = (rand() % 11)* (rand() % 2 ? 1 : -1);
		arr[i] = number;
		}

	for (int i = 0;i < N;i++) //print the array
		printf("%02d ", arr[i]);
	putchar('\n');
	
	printf("Sum: %d", getSumInt(arr, N));

		return 0;
}