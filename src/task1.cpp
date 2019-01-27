int wordCount(char buf[])
{
	int count = 0, i =0;
	while (buf[i] != '\0')
		i++;
	if (buf[i - 1] == '\n')
		buf[i - 1] = '\0';
	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == ' ')
		{
			while (buf[i] == ' ')
				i++;
			i--;
		}
		else if (buf[i] != ' ')
		{
			while ((buf[i] != ' ') && (buf[i]!='\0'))
				i++;
			i--;
			count++;
		}
		i++;
	}
	return count;
}