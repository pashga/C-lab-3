#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
	int i, word=0, lettercount = 0, wordscount=0;
	char buf[N];

	printf("Vvedite stroku:\n\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = ' ';

	for (i=0;buf[i] != '\0';i++)
	{
		if (buf[i] != ' ' && word == 0)
		{
			word=1;
			wordscount++;
			lettercount++;
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && word == 1)
		{
			lettercount++;
			putchar(buf[i]);
		}
		else if (buf[i] == ' ' && word == 1)
		{
			word = 0;
			printf("    chislo bukv:%d\n\n", lettercount);
			lettercount = 0;
		}
	}

	printf("Vsego slov:%d", wordscount);
	getchar();
	return 0;
}