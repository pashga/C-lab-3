#include <string.h>



int wordCount(char buf[])
{
	int m = 0, n = 0, i = 0;

	for (i = 0; i < strlen(buf); i++)
	{
		if (buf[i] == ' ')
		{
			continue;
		}
		if (buf[i] != ' ')
		{
			n++;
		}
		if (buf[i] != ' '&&buf[i + 1] == ' ' && n > 0)
		{
			m++;
		}
		if (buf[i] != ' '&&buf[i + 1] == '\n' && n > 0)
		{
			m++;
		}
	}
	return m+1;
}