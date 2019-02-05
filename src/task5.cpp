#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task5.h"




int getSumInt(int arr[], int N)
{
	int i=0, j=0, k=0, con=0, index=0, sum = 0;
	for (j = 0; j < N; j++)
	{
		if (arr[j] < 0)
		{
			index = j;
			break;
		}
	}
	for (int k = 0; k < N; k++)
	{
		if (arr[k] < 0)
		{
			continue;
		}
		if (arr[k] > 0)
			con = k;
	}
	for (index=index+1; index < con; index++)
	{
		sum += arr[index];
	}
	printf("\n%d", sum);
	return sum;

}
