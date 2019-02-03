#define _CRT_SECURE_NO_WARNINGS
#include "string.h"
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int maxWord = 0;
	int lenght, len[BUFF] = { 0 };

	char * temp = strtok(buf, " "); 
	int i = 0;
	while (temp != '\0')                        
	{
		lenght = strlen(temp);
		len[i] = lenght;
		
		if (len[i] > maxWord)
		{
			strcpy(word, temp);
			maxWord = len[i];
		}
		temp = strtok(0, " ");
		i++;
	}


	return maxWord;
}