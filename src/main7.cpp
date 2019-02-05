#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100] = { 0 };
	char arr1[100] = { 0 };//array for numbers from  the arrays without repeats
	int arr2[100] = { 0 };//array for the numbers of repeats of each symbol

	printf("Enter a string:\n");
	fgets(arr, 100, stdin);
	int length = 0;
	length = strlen(arr);
	int m = 0, amountOfSymbolsInArr1 = 0;
	//creating arr1 with numbers from  the arr without repeats and counting amount of symbols in arr1
	for (int i = 0; i < length - 1; i++)
	{
		int flag = 0;
		for (int k = i + 1; k < length - 1; k++)
		{
			if (arr[i] == arr[k])
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if (!flag)
		{
			arr1[m] = arr[i];
			m++;
			amountOfSymbolsInArr1++;
		}
	}
	for (int i = 0; i < amountOfSymbolsInArr1; i++) //counting amount of repeats and creating arr2
	{
		int count = 0;
		for (int k = 0; k < length; k++)
		{
			if (arr1[i] == arr[k])
				count++;
		}

		arr2[i] = count;
	}
	
	int i = 0, j = 0, didSwap;
	int tempForArr1 = 0, tempForArr2 = 0;
	for (i = amountOfSymbolsInArr1 - 1; i > 0; i--)
	{
		didSwap = 0;
		for (int j = 0; j < i; j++)
			if (arr2[j] > arr2[j + 1])
			{
				tempForArr2 = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = tempForArr2;
				tempForArr1 = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = tempForArr1;
				didSwap = 1;
			}
		if (!didSwap)
			break;
	}

	for (int i = 0; i < amountOfSymbolsInArr1; i++) //printing the sorted table 
	{
		printf("'%c'\t%d\n", arr1[i], arr2[i]);
	}
	return 0;
}