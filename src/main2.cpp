#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
	char str[N];
	char word[N];
	printf("Enter a string:\n");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	int count = 0, i = 0;
	while (str[i]!='\0')
	{
		if (str[i] != ' ')
		{
			int j = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				word[j] = str[i];
				count++;
				i++;
				j++;
			}
			word[j] = '\0';
			printf("%s\t-\t%d letters.\n", word, count);
			count =0;
			j = 0;
			}
		else if (str[i] == ' ')
		{
			while (str[i] == ' ')
				i++;
		}
	}
	return 0;
}