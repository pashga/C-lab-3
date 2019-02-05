/*
	Написать программу, которая находит сумму чисел во введённой строке.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
#include <ctype.h> // for isdigit()
#include <stdlib.h> // for atoi()
#define SIZE 100


int main()
{
	char str[SIZE];
	printf("Please, enter the string: \n\n");
	fgets(str, SIZE, stdin);
	puts("");

	printf("The sum of the numbers in the string is: %d\n", getSum(str));
	
	return 0;
}