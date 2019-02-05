#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };
	int count = 0, flag = 0, wordSize = 0;
	printf("Just write something: ");
	gets(line);
	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] != ' ')
		{
			if (flag == 0)
			{
				count++;
				flag = 1;
			}
			wordSize++;
			printf("%c", line[i]);
		}
		if ((line[i] == ' ' && flag == 1) || line[i+1] == '\0')
		{
			flag = 0;
			if (wordSize != 0)
			{
				printf("\t size of word: %d", wordSize);
				putchar('\n');
				wordSize = 0;
			}
		}
	}
	printf("words count: %d\n", count);
	return 0;
}