#include <stdio.h>
#define N 256
#include <locale>

int main()
{
	char str[N];
	char symbol[N] = { 0 };
	int count[N] = { 0 };
	int i, j, temp;

	setlocale(LC_ALL, "Rus");
	printf("¬ведите строку: ");
	fgets(str, N, stdin);

	for (i = 0; str[i]; i++)
	{
		j = 0;
		while (str[i] != symbol[j] && symbol[j] != '\0')
		{
			j++;
		}
		symbol[j] = str[i];
		(count[j])++;
	}
	for (i = 0; i != j; i++)
	{
		for (int k = 0; k != i; k++)
		{
			if (count[i] > count[k])
			{
				temp = count[k];
				count[k] = count[i];
				count[i] = temp;
				temp = symbol[k];
				symbol[k] = symbol[i];
				symbol[i] = temp;
			}
		}
	}
	i = 0;
	while (symbol[i + 1] != '\0')
	{
		printf("%c = %d\n", symbol[i], count[i]);
		i++;
	}
	return 0;
}