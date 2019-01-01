int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, count = 0;
	int max = 0;

	while (buf[i])
	{
		if (buf[i] != ' ')
		{
			count++;
			if (count > max)
			{
				max = count;
				for (j = 0; j < max; j++)
					word[j] = buf[i - count + j + 1];
			}
		}
		else
			count = 0;
		i++;
	}
	return max;
}