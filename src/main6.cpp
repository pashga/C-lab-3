/*Задача №6
 Написать программу, которая формирует целочисленный массив размера N, 
 а затем находит сумму элементов между первым минимальным и первым максимальным элементами.
Пример:

[1 -2 3 -4 -6 2 3] -> -4

Состав

Программа должна состоять из функций:

    - int getSumMaxMin(int arr[],int N) - нахождение суммы в массиве arr длины N
    - main()
Текст программы помещается в файлы: task6.h, task6.cpp, main6.cpp*/

#include <stdio.h>
#include "task6.h"

int main()
{
	int arr[256] = { 0 };
	int N = 0;
	printf("Enter N :");
	scanf("%d", &N);
	elemenOfMassive(arr, N);
	getSumMaxMin(arr, N);
	return 0;
}