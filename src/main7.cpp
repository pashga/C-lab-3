/*
	Написать программу, которая печатает таблицу встречаемости
	символов для введённой строки, отсортированную по убыванию частоты.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
#define N 95 // ASCII (from 32 to 126 = 95)


//sort function (функция сортировки)
void quicksort(int *mas[], int first, int last)
{
	int mid, *count;
	int f = first, l = last;
	mid = *mas[(f + l) / 2]; //the calculation of the reference element (вычисление опорного элемента)
	do
	{
		while (*mas[f]>mid) f++;
		while (*mas[l]<mid) l--;
		if (f <= l) //permutation of elements (перестановка элементов)
		{
			count = mas[f];
			mas[f] = mas[l];
			mas[l] = count;
			f++;
			l--;
		}
	} while (f<l);
	if (first<l) quicksort(mas, first, l);
	if (f<last) quicksort(mas, f, last);
}


int main()
{
	char str[SIZE];
	int count[N] = { 0 };
	int *ptr[N];
	
	for (int i = 0; i < N; i++)
		ptr[i] = count + i;

	printf("Please, enter the string: \n\n");
	fgets(str, SIZE, stdin);
	puts("");

	str[strlen(str) - 1] = '\0';  //delete \n


	for (int i = 0; str[i]; i++)   //while (str[i] != '\0')
		count[str[i] - ' ']++; // ASCII ' ' === 32

	quicksort(ptr, 0, N - 1);


	for (int i = 0; i < N; i++)
	{
		if (*ptr[i] > 0)
			printf("%c - %d\n", (ptr[i] - count) + ' ', *ptr[i]); // ASCII ' ' === 32
	}

	puts("");


	return 0;
}