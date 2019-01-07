#include <stdio.h>
#include <string.h>
#define N 256


void wordCount(char buf[])
{
	unsigned int wCount = 0;
	unsigned int letterCount = 0;

	char flag = 0; // in word flag = 1, out flag = 0

	for (int i = 0; i < strlen(buf); i++)
	{
		if (buf[i] != ' ' && flag == 0)
		{
			wCount++;
			letterCount++;
			flag = 1;
			putchar(buf[i]);
			//printf("%c", buf[i]);
		}
		else if (buf[i] != ' ' && flag == 1)
		{
			putchar(buf[i]);
			letterCount++;
			if (buf[i+1] == '\0')
				printf("\t- %d letters", letterCount);
		}
		else if (buf[i] == ' ' && flag == 1)
		{
			flag = 0;
			printf("\t- %d letters", letterCount);
			letterCount = 0;
			putchar('\n');
		}
		
	}
	printf("\nThere are %d words in your string", wCount);

}


int main()
{
	char buf[N];

	printf("Enter a string\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	wordCount(buf);

	return 0;
}