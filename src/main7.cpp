#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 256

void insertSort(char*arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int number = arr[i];
		int j = i - 1;
		while (j >= 0 && number < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = number;
	}
}
void insertSort2(char *str, int *buf, int jmax)
{
	for (int j = 0; j < jmax; j++)
	{
		int number = buf[j];
		char sumbol = str[j];
		int k = j - 1;
		while (k >= 0 && number < buf[k])
		{
			buf[k + 1] = buf[k];
			str[k + 1] = str[k];
			k--;
		}
		buf[k + 1] = number;
		str[k + 1] = sumbol;
	}
}

int main()
{
	char arr[N], str[N];
	int buf[256] = { 0 };
	int j = 0;
	printf("Enter a string:\n");
	fgets(arr, N, stdin);
	int size = strlen(arr)-1;
	insertSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		int count = 1;
		str[j] = arr[i];
		for (i; arr[i] == arr[i + 1]; i++)
		{
			count++;
		}
		buf[j] = count;
		j++;
	}
	int jmax = j;
	insertSort2(str, buf, jmax);
	for (j = 0; j < jmax; j++)
		printf("%c\t%d\n", str[j], buf[j]);
	return 0;
}