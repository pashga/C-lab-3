#include <stdio.h>

int main()
{
	char str[256];
	char buf[256];
	int number[256];
	int j = 0, i_str, i_buf, n, max, i;
	char charmax;

	printf("Enter a string: \n");

	fgets(str, 256, stdin);

	for (i_str = 0; str[i_str] != '\n'; i_str++)
	{
		for (i_buf = 0; i_buf < j; i_buf++)
			if (str[i_str] == buf[i_buf])
				break;
		if (i_buf == j)
			buf[j] = str[i_str], j++;
	}

	for (i_buf = 0; i_buf < j; number[i_buf] = n, i_buf++)
		for (n = 0, i_str = 0; str[i_str] != '\n'; i_str++)
			if (buf[i_buf] == str[i_str])
				n++;

	for (number[j] = '\0', j = 0, n = 0; number[j] != '\0'; j++)
	{
		for (i = j, n = j, max = number[i]; number[i] != '\0'; i++)
			if (number[i] > max)
				n = i, max = number[i];
		if (number[i] == '\0')
			max = number[j], number[j] = number[n], number[n] = max,
			charmax = buf[j], buf[j] = buf[n], buf[n] = charmax;
	}

	for (j = 0; number[j] != '\0'; j++)
		printf("There %d symbols '%c' in this string.\n", number[j], buf[j]);
	printf("Click Enter!");

	getchar();
	return 0;
}
