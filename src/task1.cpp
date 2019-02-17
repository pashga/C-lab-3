int wordCount(char buf[])

{
	int i, count = 0, slov = 0;

	for (i = 0; buf[i] != '\0'; i++)

		if (buf[i] != ' ' && slov == 0)
		{
			slov = 1;
			count++;
		}
		else if (buf[i] == ' ')
			slov = 0;
	return count;
}