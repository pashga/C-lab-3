/*Написать программу, которая печатает таблицу встречаемости 
 символов для введённой строки, отсортированную по убыванию частоты*/

#include <stdio.h>
#define stringLength 256 // максимальная длинна строки
#define max 256 

void printArr2(int * arr1, char * arr2, int size)
{
	for (int i = size - 1; i >= 0; i--)
		if (arr1[i] != 0)
			printf("%3d   '%c'\n", arr1[i], arr2[i]);
}

void insertSort2Arr(int * arr1, char * arr2, int size) //
{
	for (int i = 0; i < size; i++)
	{
		int number = arr1[i];
		char letter = arr2[i];
		int j = i - 1;
		while (j >= 0 && number < arr1[j])
		{
			arr1[j + 1] = arr1[j];
			arr2[j + 1] = arr2[j];
			j--;
		}
		arr1[j + 1] = number;
		arr2[j + 1] = letter;
	}
}

void write2Arr(int * arr1, char * arr2, int size)
{
	for (int i = 0; i < size; i++)
		if (arr1[i] != 0)
			arr2[i] = i;
}

void countArrLetter(int * arr1, char * arr2)
{
	for (int i = 0; arr2[i] != '\0'; i++)
	{
		arr1[arr2[i]]++;
	}
}

int main()
{
	char str[stringLength];
	int countLetter[max] = { 0 };
	printf("Enter  the string : ", stringLength - 1);
	fgets(str, stringLength, stdin);

	int i = 0; 
	for (; str[i] != '\n'; i++)
		;
	str[i] = '\0';

	countArrLetter(countLetter, str);
	write2Arr(countLetter, str, max);
	insertSort2Arr(countLetter, str, max);
	printArr2(countLetter, str, max);
	return 0;
}