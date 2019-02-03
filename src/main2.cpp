#include <stdio.h>
#include <cstring>
#define N 256

int main()
{
	char str[N];
	printf("enter a string:\n");
	fgets(str, N, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	int i = 0, spacecounter = 0, countletters=0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			putchar(str[i]);
			spacecounter = 0;
			countletters++;
			
		}

		else
		{
			if (spacecounter == 0)
				printf(" - %d", countletters), putchar('\n');
			spacecounter++;
			countletters = 0;
		}
		i++;
	}
	printf(" - %d", countletters);
	

	return 0;
}
