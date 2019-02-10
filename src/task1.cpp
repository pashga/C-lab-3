#include <string.h>

int wordCount(char buf[])
{
	int i = 0, count = 0;
	int state = 0;

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	while (buf[i])
	{
		if (buf[i] != ' ' && state == 0)
		{
			state = 1;
			count++;
		}

		else if (buf[i] == ' ' && state == 1)
			state = 0;
		i++;
	}
	return count;
}