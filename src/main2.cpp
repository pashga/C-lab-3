#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
	char buf[N];
	int i, inWords = 0, countWords = 0, countLetter = 0;
	printf("Enter a string:\n");
	fgets(buf, N, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = ' ';
	
	for (i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && inWords == 0)
		{
			inWords = 1;
			countWords++;
			countLetter++;
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && inWords == 1)
		{
			countLetter++;
			putchar(buf[i]);
		}
		else if ((buf[i] == ' ' && inWords == 1) /*|| (buf[i + 1] == EOF && inWords == 1)*/)
		{
			inWords = 0;
			printf("-%5d letters", countLetter);
			putchar('\n');
			countLetter = 0;
		}
	}

	printf("Words: %d\n", countWords);
	return 0;
}