#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
	char buf[N] = { 0 };
	char word[N] = { 0 };
	int j = 0;
	int charCount = 0;
	int i = 0;
	int inWord = 0;
	int wordCount = 0;
	

	printf("Enter a string\n");
	fgets(buf, N, stdin);


	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	
	for (;buf[i]!='\0';i++)
	{
		if (buf[i] != ' ' && inWord == 0) // check word or space
		{
			inWord = 1;
			wordCount++;
			for (j = 0, charCount = 0; buf[i] != ' ' && buf[i] != '\0';j++, i++) //write the word to the array and count the number of letters
			{
				word[j] = buf[i];
				charCount++;
			}
			i--;
			word[j] = '\0';
			printf("%s\t%d\n", word, charCount);
			
		}
		else if (buf[i] == ' ' && inWord == 1)
			inWord = 0;
	}
	

	printf("Count of worlds: %d", wordCount);

	return 0;
}