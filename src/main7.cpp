// Написать программу, которая печатает таблицу встречаемости символов
//для введённой строки, отсортированную по убыванию частоты
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 1024

int main(){
	char str[N] = { 0 };							//входной массив
	char counter[128] = { 0 };						//массив счётчика
	char symbols[128] = { 0 };						//массив символов
	int n = 0, tmp = 0;								//

	printf("Enter a string:");
	fgets(str, N, stdin);
	fflush(stdin);
	printf("You have %d symbols\n", strlen(str) - 1);
	//---Формирование массива символов---------------
	for (int i = 32; i <= 126; i++)
		symbols[i] = ' ' + n++;
	//---Формирование массива счётчика---------------
	for (int i = 0; i <= strlen(str); i++){
		for (int j = 32; j <= 126; j++)
			if (str[i] == symbols[j])
				counter[j]++;
	}
	//---Сортировка массивов-------------------------
	for (int i = 32; i <= 126; i++){
		for (int j = 126; j >= i; j--){
			if (counter[j] < counter[j + 1]){
				tmp = counter[j];
				counter[j] = counter[j + 1];
				counter[j + 1] = tmp;
				tmp = symbols[j];
				symbols[j] = symbols[j + 1];
				symbols[j + 1] = tmp;
			}
		}
	}
	//---Вывод результатов---------------------------
	printf("ASCII\tcounter\n");
	for (int m = 32; m <= 126; m++)
		printf("%c\t%d\n", symbols[m], counter[m]);
	return 0;
}