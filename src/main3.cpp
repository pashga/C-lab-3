#define N 255
#include <stdio.h>
#include "task3.h"


int main()
{
	char buf[N],word[N];
	fgets(buf, 255, stdin);
	int countS = getMaxWord(buf, word);
	printf("\nMaxWord: %S", word);
	for (int i = 0; word[i] != '\0'; i++)
	{
		printf("%c", word[i]);
	}
	printf("\n%d - symblos", countS);
	
	return 0;
}