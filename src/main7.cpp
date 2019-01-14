#define N 256
#define M 127
#include <stdio.h>
#include <stdlib.h>
struct symbol
{
	int frequency;
	char latter;
};
int compar(const void* p1, const void* p2)
{
	return (((symbol*)p2)->frequency - ((symbol*)p1)->frequency);
}
void printtable(symbol *table, int size)
{
	for (int i = 0; i < size; i++)//вывод таблицы
	{
		if (table[i].frequency != 0)
			printf("%c - %d\n", table[i].latter, table[i].frequency);
	}
}
int main()
{
	char line[N];
	symbol table[M];
	char temp;
	int i = 0;
	for (; i < M; i++)//зануление
		table[i].frequency = 0;
	for (i = 0; i < M; i++)//заполнение ascii символов
		table[i].latter = i;
	fgets(line, N, stdin);
	for (i = 0; line[i] != '\0'; i++)//заполнение таблицы
	{
		temp = line[i];
		table[temp].frequency += 1;
	}
	qsort(table, M, sizeof(symbol), compar);
	printtable(table, M);
	return 0;
}