int wordCount(char buf[])
{
	int i = 0; int count = 0;
	int state = 0;//0- вне , 1 - внутри , state условная переменная, два состояния : в строке и нет 
	
	while (buf[i])
	{
		if (buf[i] != ' ' && state == 0)
		{
			state = 1; count++;
		}
		else if (buf[i] == ' ' && state == 1)
			state = 0; i++;
	}
	return count;
}