#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"

int main()
{
	int buf[] = {-9,-8,-7,-6,-5,-4,-3,-2,-1,1,2,3,4,5,6,7,8,9};
	int arr[128];
	int N = 0;
	printf("Enter N:\n");
	scanf("%d", &N);
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = buf[rand() % 18];
	}
	arr[N] = '\0';
	
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	putchar('\n');
	printf("sum between the first negative and last positive :  %d", getSumInt(arr, N));

	
	return 0;
}


