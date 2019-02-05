/*
 Задача №6
 
 Написать программу, которая формирует целочисленный массив размера N,
 а затем находит сумму элементов между первым минимальным и первым максимальным элементами.
 Пример:
 
 [1 -2 3 -4 -6 2 3] -> -4
 
 Состав
 
 Программа должна состоять из функций:
 
 - int getSumMaxMin(int arr[],int N) - нахождение суммы в массиве arr длины N
 - main()
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"
#define N 10

int main(void){
    int arr[N];
    srand(time(0));
    printf("Your array:\t");
    for(int i = 0; i < N; i++){
        arr[i] = rand()%(20)-10;
        printf("%d ", arr[i]);
    }
    printf("->%d\n", getSumMaxMin(arr, N));
    
}
