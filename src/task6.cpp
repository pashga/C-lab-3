#include <stdio.h>

int getSumMaxMin(int arr[], int N){
	int val_1 = 0, val_2 = 0;
	int min = 0, max = 0;

	for (int i = 0; i < N; i++){
		if (arr[i] < arr[min])
			min = i;
		if (arr[i] > arr[max])
			max = i;
	}
	printf("\nmin = arr[%d]\nmax = arr[%d]\n", min, max);

	if (min < max){
		val_1 = min;
		val_2 = max;
	}
	else{
		val_1 = max;
		val_2 = min;
	}

	int sum = 0;
	for (int i = val_1+1; i < val_2; i++)
		sum += arr[i];

	return sum;
}