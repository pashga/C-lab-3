/*
Написать программу, которая для введённой строки
выводит самое длинное слово его длину
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 100
#define N 100

int main()
{
	char buf[SIZE] = { '\0' };
	char word[N] = { '\0' };

	printf("Enter the string: \n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';  //delete '\n'
	
	int max_letters = getMaxWord(buf, word);

	printf("\nThe longest word is: %s\n", word);
	printf("Number of letters in the largest word is: %d\n\n", max_letters);
	return 0;
}




/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define SIZE_1 100
#define SIZE_2 100

int main()
{
	char str[SIZE_1];
	char word[SIZE_2];

	printf("Please, enter the string: \n\n");
	fgets(str, SIZE_1, stdin);
	puts("");

	int max_letters = getMaxWord(str, word);

	printf("The largest word is: %s\n", word);
	printf("Number of letters in the largest word is: %d\n\n", max_letters);


	return 0;
}
*/