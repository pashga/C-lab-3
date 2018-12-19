#include "task1.h"

int wordCount(char buf[])
{
	int count = 0;
	int size = 0;
	//найдем длину строки
	for (int i = 0; i < BUFF; i++)
	{
		size++;
		if (buf[i] == '\0')
			i = BUFF;
	}
	for (int i = 0; i < size-1; i++)
	{
		if (i==0 && buf[0] != (char)(32))	//если строка начинается с буквы
		{
			count++;
		}
		if (buf[i] == (char)(32) && buf[i+1] != (char)(32) && buf[i + 1] != 0) //определение начала нового слова
		{
			count++;
		}
		////если строка заканчивается пробелом
		//if(buf[i] == (char)(32) && buf[i + 1] == '\0')
		//{
		//	count--;
		//}
	}
	return count;
}