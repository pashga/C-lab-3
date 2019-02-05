/*Написать программу, которая формирует целочисленный массив размера N,
а затем находит сумму элементов между первым минимальным и первым максимальным элементами.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
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
	printf("Sum : %d", getSumMaxMin(arr, N));
	return 0;
}