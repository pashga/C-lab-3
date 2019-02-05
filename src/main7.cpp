#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define SIZE 256

int main()
{
	char string[SIZE] = { 0 };
	char symbols[SIZE] = { 0 };
	int counter[SIZE] = { 0 };
	int t = 0, flag = 0;
	printf("Just write something: ");
	gets(string);
	for (int i = 0; string[i] != '\0'; i++)					//from previous C-lab
	{
		for (int j = 0; symbols[j] != '\0'; j++)
		{
			if (string[i] == symbols[j])
			{
				counter[j]++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			symbols[t] = string[i];
			counter[t]++;
			t++;
		}
		flag = 0;
	}														//sorting
	int temp1;
	char temp2;
	for (int i = 0; i != t; i++)
	{
		for (int j = 0; j != t; j++)
		{
			if (counter[i] > counter[j])
			{
				temp1 = counter[i];
				temp2 = symbols[i];
				counter[i] = counter[j];
				counter[j] = temp1;
				symbols[i] = symbols[j];
				symbols[j] = temp2;
			}
		}
	}
	printf("symbol\tquantity\n");
	for (int i = 0; symbols[i] != '\0'; i++)
	{
		printf("'%c'\t%d\n", symbols[i], counter[i]);
	}
	return 0;
}
