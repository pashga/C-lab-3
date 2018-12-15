#include <string.h>
#include <stdio.h>
int getMaxWord(char buf[], char word[])
{
	int i = 0;
	int state = 0;
	int z = 0, x, y, x1, y1;

	buf[strlen(buf)] = ' ';
	
	while (buf[i])
	{
		if (buf[i] != ' ' && state == 0)
		{
			state = 1;
			x = i;
		}

		else if ((buf[i] == ' '||buf[i] == '\n') && state == 1)
		{
			state = 0;
			y = i;
			if (z < y - x)
				z = y - x, y1 = y, x1 = x;
		}
		
		i++;
	}

	for (i = 0; x1 <= y1; i++, x1++)
		word[i] = buf[x1];
	word[i - 1] = '\0';

	return z;
}
