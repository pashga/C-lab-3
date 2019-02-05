#include <stdio.h>
#define N 255
char * clear(char * line);


int main()
{
	char buf[N];
	fgets(buf, 255, stdin);
	clear(buf);
	int lenght = printf(buf),count=0;
	buf[lenght] = ' ';
	buf[lenght + 1] = '\0';
	printf("\n\n");
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ')
		{
			printf("%c", buf[i]);
			count++;

		}
		else
		{
			printf("\t %d symbols\n",count);
			count = 0;
		}
	}
	
	return 0;
}

char * clear(char * line)
{
	for (int j = 0; line[j] != '\0'; j++)
	{
		if (line[j] == ' ' && line[j - 1] == ' ')
		{
			for (int k = j; line[k] != '\0'; k++)
			{
				line[k] = line[k + 1];
				j = 0;
			}
		}
	}
	if (line[0] == ' ')
		for (int k = 0; line[k] != '\0'; k++)
		{
			line[k] = line[k + 1];
		}
	for (int len = printf(line) - 1; len > 0; len--)
	{
		if (line[len] == ' ' || line[len] == '\n')
			line[len] = '\0';
		else break;
	}
	return 0;
}