#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
	char str[N];
	int buf[N] = { 0 };
	int count[N] = { 0 };
	int max = 0, j = 0, k = 0;;
	printf("Enter your string: ");
	fgets(str, N, stdin);

	for (j = 0; str[j] != '\0'; j++);
	if (str[j-1] == '\n')
			str[j - 1] = '\0';
	j = 0;
	

	for (int i = 0; str[i] != '\0'; i++) // заполн€ем счетчик и массив дл€ сортировки
		count[str[i]]++;
	
	for (int i = 0; i<N; i++) // из count[str[]] передаем в buf[] положительные значени€ счетчика
	{
		if (count[str[i]] > 0)
		{
			buf[j] = count[str[i]];
			j++;
		}
	}

	for(int i=0; i <= j; i++)
	{
		max = buf[i];
		k = i - 1;
		while (k >= 0  && max > buf[k])
		{
			buf[k + 1] = buf[k];
			k--;
		}
		buf[k+1] = max;
	}

	for (int i = 0; i <= j; i++) // печатаем символы и их повтор€емость в пор€дке убывани€
	{
		for (int k = 0; str[k] != '\0'; k++)
		{
			if (buf[i] == count[str[k]] && count[str[k]]>0)
			{
				printf("%c - %d\n", str[k], count[str[k]]);
				count[str[k]] = 0;
			}
		}
	}
	return 0;
}