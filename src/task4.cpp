#include <ctype.h>
#define N 32
#define rank 9

int getSum(char buf[]){
	int sum = 0, value = 0, count = 0;;

	int i = 0;
	while (buf[i])	{
		if (isdigit(buf[i])){						//Проверка - является ли числом ?
			value = value * 10 + (buf[i] - '0');
			count++;
		}
		if (!(isdigit(buf[i])) || count == rank){	//Ограничение размеров числа
			sum += value;
			count = 0;
			value = 0;
		}
		i++;
	}
	return sum;
}