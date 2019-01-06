//Написать программу, которая находит сумму чисел во введённой строке

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"
#define N 256

int main(){
	char buf[N] = { 0 };
	
	printf("Enter a string: ");
	fgets(buf, N, stdin);
	printf("Sum is: %d", getSum(buf));
	return 0;
}