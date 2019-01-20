#include <stdio.h>
#include "task5.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int N = 0;
	int arr[M] = { 0 };
	puts("Enter N:");
	scanf("%d",&N);
	elemenOfMassive(arr, N);
	getSumInt(arr, N);
	return 0;
}