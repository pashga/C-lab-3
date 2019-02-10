#include <stdio.h>
#include <stdlib.h>
#include "task5.h"
#include <time.h>
#define N 10

int main(void) {
	int arr[N];
	srand(time(0));
	printf("Array:\t");
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0)
			arr[i] = (rand() % 10 + 1) * - 1;
		if (i % 2 != 0)
			arr[i] = rand() % 10 + 1;
		printf("%d ", arr[i]);
	}
	printf("->%d\n", getSumInt(arr, N));

}