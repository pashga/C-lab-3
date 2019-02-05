#include <string.h>
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int length = strlen(buf);
	int from = 0, count = 0;
	for (int i = 0; i < length; i++)// finding the beginning of the first word (from)
	{
		if (buf[i] != ' ')
			break;
		else
			from++;
	}

	for (int i = 0; i <= length - 1; i++)
	{
		if ((buf[i] != ' ') && (buf[i + 1] == ' '))
		{
			count++;
		}
		else if ((buf[i] != ' ') && (buf[i + 1] == '\n'))
		{
			count++;
		}
		else if ((buf[i] != ' ') && (buf[i] != '\n') && (buf[i + 1] == '\0'))
		{
			count++;
		}
		else
			continue;
	}
	
	char arr[SIZE2][SIZE] = { 0 }; //creating array for separate words
	int i = 0, j = 0;
	for (int k = from; k < length; k++)//putting words into array
	{
		if ((buf[k] != ' ') && (buf[k] != '\n'))
		{
			arr[i][j] = buf[k];
			j++;
		}
		else if ((buf[k] == ' ') && (buf[k - 1] != ' '))
		{
			i++;//moving to the next string
			j = 0;
		}
		else if ((buf[k] == ' ') && (buf[k - 1] == ' '))
			continue;
		else if (buf[k] != '\n')
			break;
	}
	int lengthOfTheLongestWord = strlen(arr[0]);
	int indOfTheLongestWord = 0;
	for (int k = 0; k < count; k++)//finding the longest word
	{
		if (strlen(arr[k]) > lengthOfTheLongestWord)
		{
			lengthOfTheLongestWord = strlen(arr[k]);
			indOfTheLongestWord = k;
		}
	}
	for (int k = 0; k < SIZE; k++)
	{
		word[k] = arr[indOfTheLongestWord][k];
	}
	return lengthOfTheLongestWord;
}