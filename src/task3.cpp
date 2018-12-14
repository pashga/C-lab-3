int getMaxWord(char buf[], char word[])
{
	int inWord = 0;
	int count = 0;
	int charCount = 0, maxWord = 0;
	int j, i = 0;

	for (;buf[i] != '\0';i++)
	{
		if (buf[i] != ' ' && inWord == 0) // check word or space
		{
			inWord = 1;
			
			for (charCount = 0; buf[i] != ' ' && buf[i] != '\0'; i++) //count the number of letters
				charCount++;

			if (maxWord <= charCount)  //if last word has more letters, write it in the array
			{
				for (j = 0, i = i - charCount; buf[i] != ' ' && buf[i] != '\0'; i++, j++) 
					word[j] = buf[i];
				i--;
				word[j] = '\0';
				maxWord = charCount;
			}
		}
		else if (buf[i] == ' ' && inWord == 1)
			inWord = 0;
	}
	return maxWord;
}