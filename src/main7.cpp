#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
	int i, j, strg, max = 0;
	char str[N];
	char buf[128] = { 0 };
	char mas[128] = { 0 };
	printf("Vvedite stroku: \r\n");
	fgets(str, N, stdin);
	strg = strlen(str);
	if (str[strg - 1] == '\n')
		str[strg - 1] = '\0';


	for (i = 0; str[i] != '\0'; i++)
		buf[str[i]]++;

	for (i = 0, j = 0; i < 128; i++)
	{
		if (buf[i] > 0)
		{
			mas[j] = buf[i];
			j++;
		}
	}

	for (i = 0; i < strlen(mas); i++)
	{
		max = mas[i];
		j = i - 1;
		while (j >= 0 && max > mas[j])
		{
			mas[j + 1] = mas[j];
			j--;
		}
		mas[j + 1] = max;
	}

	for (i = 0; i < strlen(mas); i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (mas[i] == buf[str[j]])
			{
				printf("%c - %d\n", str[j], buf[str[j]]);
				buf[str[j]] = 0;
			}
		}
	}

	getchar();

	return 0;
}