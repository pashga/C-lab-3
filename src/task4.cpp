#include <string.h>
#include "task4.h"


int getSum(char buf[])
{
	int len = strlen(buf);
	int summ = 0;
	int flag = 0;
	for (int i = 0; i < len; i++)
	{
		//идем по строке и ищем число, если число двухзначное
		if (buf[i] >= '0' && buf[i] <= '9' && buf[i+1] >= '0' && buf[i+1] <= '9' && buf[i+1]!='\0')
		{
			summ += ((int)(buf[i]) - 48) * 10;;		// десятки
			summ += ((int)(buf[i+1]) - 48);			// единицы
			i++;
			flag = 1;
		}
		//идем по строке и ищем число, если число однозначное
		if (buf[i] >= '0' && buf[i] <= '9'&& flag ==0)
		{
			summ += ((int)(buf[i]) - 48);			// единицы
		}
		flag = 0;
	}
	return summ;
}
