#include <stdio.h>
int getSumInt(int arr[], int N)
{
	int sum=0;
	int pos1 = 0, pos2 = N - 1;
	
	int i = 0;
	while (arr[i] >= 0 && i<N-1) //первый отрицательный
		i++;
	if (i == N-1 && arr[N-1] >= 0)
	{
		printf ("\nThere are not number less than 0 in that array!");
		return 0;
	}
	pos1 = i;

	i = N-1;
	while (arr[i]<= 0 && i>0) //последний положительный
		i--;
	if (i == 0 && arr[0] <= 0)
	{
		printf("\nThere are not number more than 0 in that array!");
		return 0;
	}
	pos2 = i;
	
	for (i = pos1 + 1; i < pos2; i++)
		sum += arr[i];
return sum;
}