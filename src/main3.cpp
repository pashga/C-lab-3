/*	Написать программу, которая для введённой строки выводит самое длинное слово его длину */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256

int main(){
	char buf[N] = { 0 };
	char word[N] = { 0 };
	int length = 0;

	printf("Enter a string: ");
	fgets(buf, N, stdin);

	length = getMaxWord(buf, word);
	printf("Longest word is: ");
	puts(word);
	printf("Word length = %d\n", length);
	return 0;
}