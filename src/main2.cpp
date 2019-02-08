/*Написать программу, которая для введённой строки определяет количество слов и выводит каждое слово на отдельной строке и его
   длину*/


#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
	char str[N] = { 0 };
	char word[N] = { 0 };
	int j = 0;
	int i = 0;
	int countLetter = 0;
	int inWord = 0;
	int countWord = 0;


	printf("Enter a string: ");
	fgets(str, N, stdin);


	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';


	for (i=0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			countWord++;
			for (j = 0, countLetter = 0; str[i] != ' ' && str[i] != '\0'; j++, i++)
			{
				word[j] = str[i];
				countLetter++;
			}
			i--;
			word[j] = '\0';
			printf("%s\t%d\n", word, countLetter);

		}
		else if (str[i] == ' ' && inWord == 1)
			inWord = 0;
	}


	printf("Count of worlds: %d", countWord);

	return 0;
}