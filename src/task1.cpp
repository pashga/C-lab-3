int wordCount(char buf[])
{
	int i = 0;
	int inWord = 0;
	int count = 0;
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
			inWord = 1, count++;

		else if (buf[i] == ' ' && inWord == 1)
			inWord = 0;
		i++;
	}
	return count;
}