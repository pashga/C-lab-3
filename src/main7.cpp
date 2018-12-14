#include <stdio.h>
#include <string.h>
#define N 256
#define M 128

int main()       //print character and the number of its iterations in descending order
{
	char str[N], arr[M] = { 0 };
	int i, j, max = 0, index;

	printf("Enter a string: ");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	for (i = 0; str[i] != '\0';i++)  //count iterations of each character
		arr[str[i]]++;


	for (i = 0; str[i] != '\0'; i++)  //print character and the number of its iterations in descending order
	{

		for (j = 0; str[j] != '\0'; j++)  //looking for maximum number of iterations
		{
			if (arr[str[j]] > max)
			{
				max = arr[str[j]];
				index = j;
			}
		}	
		
		if (arr[str[index]] != 0)  //don't print the same characters in the table
		{
			printf("%c %d\n", str[index], arr[str[index]]);
			arr[str[index]] = 0;
			max = 0;
		}
	}
	
	return 0;
}