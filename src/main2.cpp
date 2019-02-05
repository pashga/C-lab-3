#include<stdio.h>
#include<string.h>
#define N 256

char * clear(char * line)
{
	int a = strlen(line);
	while (line[0] == ' ')
	{
		for (int b = 0; b < a; b++)
		{
			line[b] = line[b + 1];
		}
		a = a - 1;
	}
	for (int i = 0; i < a; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (int j = i; j < a; j++)
			{
				line[j] = line[j + 1];
			}
			a = a - 1;
		}
	}
	if (line[a - 1] == ' ')
	{
		line[a - 1] = '\0';
	}
	return line;
}

int wordCount(char line[])
{
int value = 0, i = 0;

	while (line[i] != '\0')
	{
		if (line[i] == ' ')
			value++;
		i++;
	}
		return value;
	}

int main()
{
	char line[N];
	char present[128] = { 0 };
	printf("Enter a string:\n");
	fgets(line, N, stdin);
	clear(line);
	printf("Number of words=%d\n", wordCount(line));
	int spacecounter = 0;
	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] != ' ')
		{
			putchar(line[i]);
			spacecounter++;
		}
		else
		{
			printf("-%d\n", spacecounter);
			spacecounter = 0;
		}
	}
	return 0;
}