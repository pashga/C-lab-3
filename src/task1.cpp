int wordCount(char buf[])
{	
	int wordCount = 0;
	short flag = 0;

	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ' '&& flag == 1)
			flag = 0;
		
		else if (buf[i] != ' '&& flag == 0)
		{
			wordCount++;
			flag = 1;
		}		
	}
	return wordCount;
}
