int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0;
	int longest_word = 0;
	int countLetter = 0;
	int a = 0;
	while (buf[i])
	{
		if (buf[i] != ' ')
			countLetter++;
		else
		{
			if (countLetter >= longest_word)
			{
				longest_word = countLetter;
				a = i - longest_word;
				for (j = 0, i = a; j < longest_word; j++, i++)
					word[j] = buf[i];
				word[j] = '\0';
			}
			countLetter = 0;
		}
		i++;
	}
	return longest_word;
}
