#include "task1.h"
#include <ctype.h> // for isspace()

int wordCount(char buf[]) // подсчет количества слов
{
	int inWord = 0; // are we in word (1) or not in word (0)
	int count = 0; // word counter
	
	for (int i = 0; buf[i]; i++)
	{
		if (!isspace(buf[i]) && inWord == 0)
		{
			inWord = 1;
			count++;
		}
		else if (isspace(buf[i]) && inWord == 1)
			inWord = 0;
	}

	return count;
}