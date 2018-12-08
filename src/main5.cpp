#include <stdio.h>
#include <time.h>
#include "task5.h"

int main(void)
{
	int N, arr[100];
	int i,p=1,j,j1=0;
	float r;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		j = time(NULL);
		j = j / p;
		j = j % 10;
		j1 += j;
		arr[i] = j1 % 10 - 5;
		p = p * 10;
	}
	printf("%d\n", getSumInt(arr, N));

}