#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 10


int main()
{
    int arr[N];
    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 20 - 10;              //заполняем массив рандомными числами - и + (если rand() %10, тогда будут только положительные)
        printf("%2d, ", arr[i]);
    }
    printf("\n");
    printf("Sum = %d \n", getSumInt(arr,N));

    return 0;
}
