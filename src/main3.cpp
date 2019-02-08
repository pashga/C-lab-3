/*Написать программу, которая для введённой строки 
   выводит самое длинное слово его длину*/

#include <stdio.h>
#include "task3.h"
#include <string.h>
#define N 256

int main()
{
	char buf[N] = { 0 };
	char word[N] = { 0 };
	
	printf("Enter a string: ");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0'; //  убирает  '/n'
	printf("%s - %d\n", word, getMaxWord(buf, word));

	return 0;
}