#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[300];
	int c[255] = { 0 };
	int i, j, max,n;
	scanf("%[^\n]s", s);
	n = strlen(s);
	for (i = 0; i < n; i++)
		c[s[i]]++;
	for (i = 1; i < 256; i++)
	{
		max = 1;
		for (j = 1; j < 256; j++)
		{
			if (c[j] > c[max])
				max = j;
		}
		if (c[max] == 0)
			continue;
		printf("%c %d\n", max, c[max]);
		c[max] = 0;
	}


	return 0;
}