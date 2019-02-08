int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0;
	int maxWord = 0;
	int countLetter = 0;
	int a = 0;
	while (buf[i])
	{
		if (buf[i] != ' ')
			countLetter++;
		else
		{
			if (countLetter >= maxWord)
			{
				maxWord = countLetter;
				a = i - maxWord;
				for (j = 0, i = a; j < maxWord; j++, i++)
					word[j] = buf[i];
				word[j] = '\0';
			}
			countLetter = 0;
		}
		i++;
	}
	return maxWord;
}