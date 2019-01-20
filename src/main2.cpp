#include <stdio.h>
#include <string.h>
#define N 255
int main()

{
	int countWord = 0;
	int i = 0;
	int count = 0;
	char str[N] = { 0 };
	fgets(str, N, stdin);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		if (str[i] != ' ')
		{
			printf("%c",str[i]);
			count++;
		}
		if (str[i] != ' '&& str[i + 1] == ' ')
		{
			printf("\t %d", count);
			putchar('\n');
			count = 0;
		}
		if (str[i] != ' '&& str[i + 1] == '\n')
		{
			printf("\t %d", count);
			putchar('\n');
			count = 0;
		}
	}
	return 0;
}