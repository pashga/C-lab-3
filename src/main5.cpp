#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	const int N = 10;
	int arr[N];
	int i = 0;
	srand(time(0));
	
	for (i = 0; i < N; i++)
		arr[i] = rand() % 21 - 10;
	
	printf(" = %d", getSumInt(arr,N));
	return 0;
}