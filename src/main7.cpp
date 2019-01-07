#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	int symbols[256] = { 0 };
	int max;
	int maxNumber;
	
	printf("Enter a string:\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	for (int i = 0; i < strlen(str); i++)
	{
		symbols[str[i]]++;
	}

	while (1)
	{
		max = symbols[0];
		maxNumber = 0;
		for (int i = 1; i < 128; i++)
		{
			if (symbols[i] > max)
			{
				max = symbols[i];
				maxNumber = i;
			}
		}
		if (maxNumber == 0)
			break;
		
		printf("\n%c meets %d", maxNumber, max);
		
		symbols[maxNumber] = 0;
	}
	

	return 0;
}