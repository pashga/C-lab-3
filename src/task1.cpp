int wordCount(char buf[])
{
	int i, inWords = 0, count = 0;
	for (i = 0; buf[i] != '\0'; i++)
		if (buf[i] != ' ' && inWords == 0)
		{
			inWords = 1;
			count++;
		}
		else if (buf[i] == ' ')
			inWords = 0;
	return count;
}