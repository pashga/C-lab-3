/*Написать программу, которая печатает таблицу встречаемости
символов для введённой строки, отсортированную по убыванию частоты
Состав

Программа должна состоять из функций :

-main().
Текст программы помещается в файлы : main7.cpp*/


#include <stdio.h>
#define N 256

int main()
{
	char string[N];
	int count[128] = { 0 };
	int max = 0;
	int maks = 0;
	printf("Enter a string\n");
	fgets(string, N, stdin);

	for (int i = 0; string[i] != '\0'; i++)
	{
		count[string[i]] = count[string[i]] + 1;
	}

	for (int i = 32; i < 128; i++)
	{
		for (int j = 32; j < 128; j++)
		{
			if (count[j] > 0)
			{
				if (count[j] > max)
				{
					max = count[j];
					maks = j;
				}
			}
		}
		if (max > 0)
		{
			printf("%c   %d\n", maks, max);
			count[maks] = 0;
			max = 0;
		}
	}
	return 0;
}
