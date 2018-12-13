#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	int count[128] = { 0 };
	int max = 0;
	int jmax = 0;
	printf("Enter a string\n");
	fgets(str, N, stdin);

	for (int i = 0; str[i] != '\0'; i++)
	{
		count[str[i]] = count[str[i]] + 1;
	}

	for (int i = 32; i< 128; i++)
	{
		for (int j = 32; j < 128; j++)
		{
			if (count[j] > 0)
			{
				if (count[j] > max)
				{
					max = count[j];
					jmax = j;
				}
			}
		}
		if (max > 0)
		{
			printf("%c   %d\n", jmax, max);
			count[jmax] = 0;
			max = 0;
		}
	}
	return 0;
}
