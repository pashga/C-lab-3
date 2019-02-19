int getMaxWord(char buf[], char word[])

{
	int i, j, count = 0, maxWord = 0;
	char theLongestWord[128];

	for (i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ')
		{
			theLongestWord[count] = buf[i];
			count++;
			if (count > maxWord)
			{
				maxWord = count;
				for (j = 0; j < maxWord; j++)
					word[j] = theLongestWord[j];
			}
		}
		else
			count = 0;
	}
	return maxWord;
}