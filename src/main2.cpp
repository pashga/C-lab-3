#include <stdio.h>
#include <string.h>
#define N 1000


int main()
{

	char string[N];
	printf("Enter your string: ");
	fgets(string, N, stdin);
	int wordCount = 0; 
	int flag = 1; 
	int wordSize = 0; 

	for (int i = 0; string[i] != '\n'; i++) {
		if ((string[i] != ' ' && flag == 0) || (i == 0 && string[i + 1] == '\n'))
		{ 
			flag = 0;
			putchar(string[i]);
			wordSize++;
		}
		if ((flag == 0 && string[i] == ' ') || (flag == 0 && string[i + 1] == '\n')) 
		{ 
			printf(" - %d\n", wordSize); 
			flag = 1; 
			wordCount++; 
			wordSize = 0; 
		}
		if (string[i] != ' ' && string[i + 1] != '\n' && flag == 1) 
		{ 
			flag = 0;
			wordSize++;
			putchar(string[i]);
		}
		if (string[i + 1] == '\n') {
			printf("Number of words is : %d\n", wordCount);
		}

	}
	return 0;


}