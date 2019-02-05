/*
	Написать программу, подсчитывающую количество слов во
	введённой пользователем строке.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#define SIZE 100

int main()
{
	char str[SIZE];
	
	printf("Please, enter the string: \n\n");
	fgets(str, SIZE, stdin);
	puts("");

	printf("Number of words in your string: %d\n", wordCount(str));


	return 0;
}
