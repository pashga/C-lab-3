#include <stdio.h>
#include "task4.h"
#include <string.h>
#define N 256

int main()
{
	char buf[N] = { 0 };

	printf("Enter a string:\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')  //change \n in the end of the string to '\0'
		buf[strlen(buf) - 1] = '\0';
	
	printf("Sum: %d", getSum(buf));

	return 0;
}