#include <string.h>
int getMaxWord(char buf[], char word[])
{
	int i = 0, count = 0, top = 0, end = strlen(buf);
	while (i<=end)
	{
		if (buf[i] != ' ' && buf[i]!='\n' && buf[i] != '\0')
		{
			count++;

		}
		else
		{
			if (count > top)
			{
				top = count;
				int j = i - 1;
				word[count] = '\0';
				count--;
				while (count >=0 && j >= 0)
				{
					word[count] = buf[j];
					j--;
					count--;
				}
			}
			else count = 0;
			
		}
		i++;
	}
	return top;
}