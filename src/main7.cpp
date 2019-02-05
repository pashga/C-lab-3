#pragma warning(disable:4996)
#include <stdio.h>
//mast be stringLengthMax >=charMaxCode
#define stringLengthMax 256 // max length of string
#define charMaxCode 256 // диапазон симолов

void printArr2(int * arr1, char * arr2, int size)
{
	for (int i = size-1; i >=0; i--)
		if (arr1[i] != 0)
			printf("%3d   '%c'\n", arr1[i], arr2[i]);
}

void insertSort2Arr(int * arr1, char * arr2, int size) //сортируем по значению элементов первого массива
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
			arr2[i]=i;
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
	char str[stringLengthMax];
	int countLetter[charMaxCode] = { 0 };
	printf("Enter  the string (<%d): ", stringLengthMax -1);
	fgets(str, stringLengthMax, stdin);

	int i = 0; // убираем '\n' (можно strlen)
	for (; str[i] != '\n'; i++)
		;
	str[i] = '\0';

	printf("the string is: \"%s\"\n", str);
	
	countArrLetter(countLetter, str);
	write2Arr(countLetter, str, charMaxCode);
	insertSort2Arr(countLetter, str, charMaxCode);
	printArr2(countLetter, str, charMaxCode);
	return 0;
}