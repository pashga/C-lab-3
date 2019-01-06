#include <stdio.h>

int getSumInt(int arr[], int N){
	int sum = 0;
	int i = 0, j = 0, otr = 0, pol = 0;
	
	for (i = 0, otr = 0; arr[i] > 0; i++)
		otr = i+1;
	printf("\notr arr[%d] = %d\n", otr, arr[otr]);

	for (j = N-1, pol = N-1; arr[j] < 0; j--)
		pol = j-1;
	printf("pol arr[%d] = %d\n", pol, arr[pol]);

	for (int i = otr+1; i < pol; i++)
		sum += arr[i];
	return sum;
}