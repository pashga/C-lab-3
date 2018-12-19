#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	srand(time(NULL));
	char  buf[BUFF] = { 0 };
	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			buf[i] = (char)(32);               // пробел
		if (a == 1)
			buf[i] = (char)(rand() % 26 + 65); // буквы лат строчн
		//if (a == 2)
		//	buf[i] = (char)(rand() % 26 + 97); // буквы лат заглав
		if (a == 2)
			buf[i] = (char)(rand() % 10 + 48); // цифры
		if (i == BUFF - 1)
			buf[i] = '\0';					  // конец строки
	}
	printf("The string is: \n%s\n", buf);

	printf("\nSumma is %d\n", getSum(buf));
	
	return 0;
}