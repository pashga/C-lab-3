/*
Ќаписать программу, котора€ формирует целочисленный массив размера N,
а затем находит сумму элементов, расположенным между первым отрицательным
и последним положительным элементами.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define M 1024

int main(){
	int N = 0;
	int arr[M] = { 0 };
	srand(time(NULL));

	printf("Enter size of the array: ");
	scanf("%d", &N);

	for (int i = 0; i < N; i++){
		arr[i] = -9 + rand() % (9 + 9 + 1);
		printf("%d\t", arr[i]);
	}
	printf("Sum : %d", getSumInt(arr, N));
	return 0;
}