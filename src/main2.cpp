#include <stdio.h>
#include <string.h>


int main(void)
{
	char s[300];
	int i = 0, j = 0;
	scanf("%[^\n]s", s);
	while (s[i])
	{
		while (s[i]&&s[i] != ' ')
		{
			printf("%c", s[i]);
			i++;
			j++;
		}
		if (j!=0)
			printf(" %d\n", j);
		j = 0;
		if (!s[i])
			break;
		i++;
	}

	return 0;
}
