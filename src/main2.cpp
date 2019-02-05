#include <stdio.h>
#include <string.h>
#include <locale>
#define N 256

int main()
{
	char str[N];
	int i = 0;
	int state = 0;
	int symbol = 0;

	setlocale(LC_ALL, "Rus");
	printf("¬ведите строку: ");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	while (str[i])
	{
		if (str[i] != ' '&&state == 0)
		{
			state = 1;
			putchar(str[i]);
			symbol++;
		}
		else if (str[i] != ' '&&state == 1)
		{
			putchar(str[i]);
			symbol++;
		}
		else if (str[i] == ' '&&state == 1)
		{
			printf("=%d\n", symbol);
			state = 0;
			symbol = 0;
		}
		i++;
	}
	return 0;
}