#pragma warning(disable:4996)
#include <stdio.h>
#define sLMax 201 // max length of string

int  WordPrintAndCount(char * line)
{	
	int countWords = 0;
	int wordBegin = 0;
	short flag = 0;
	int i = -1;
	do
	{
		i++;
		if (line[i] != ' ' && line[i] != '\0')
		{
			if (flag == 0)
			{
				wordBegin = i; 
				flag = 1;
				countWords++;
			}
			putchar(line[i]);
		}

		if ( (line[i]==' ' || line[i]=='\0') && flag==1 )
		{
			printf("  %d\n", i - wordBegin);
			flag = 0;
		}
	} while (line[i] != '\0');
	return countWords;
}

int main()
{
	char str[sLMax];
	printf("Enter  the string (<%d): ", sLMax - 1);
	fgets(str, sLMax, stdin);

	int i = 0; // убираем '\n' (можно strlen)
	for (; str[i] != '\n'; i++)
		;
	str[i] = '\0';

	printf("the string is: \"%s\"\n", str);
	printf("the quantity of words: %d", WordPrintAndCount(str));
	putchar('\n');
	return 0;
}