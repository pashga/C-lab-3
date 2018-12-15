#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
	char buf[N];
	char word[N];

	printf("Enter a string: ");
	fgets(buf, N, stdin);

	int i = 0;
	int state = 0;
	int z = 0, x, y, i1, y1;

	buf[strlen(buf)] = '\0';

	while (buf[i])
	{
		if (buf[i] != ' ' && state == 0)
		{
			state = 1;
			x = i;
		}

		else if ((buf[i] == ' ' || buf[i] == '\n') && state == 1)
		{
			state = 0;
			z = i - x;
			for (i1 = 0; i1 < z; i1++, x++)
				word[i1] = buf[x];
			word[z] = '\0';
			printf("%s %d\n", word, z);
		}

		i++;
	}

	getchar();
	return 0;
}