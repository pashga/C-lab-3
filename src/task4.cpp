int getSum(char buf[])
{
	int sum = 0, i = 0;
	int value = 0;
	int digit = 0;
	
	while (buf[i] != '\0')
	{
		if (buf[i] >= '0' && buf[i] <= '9' && buf[i] != '\0')
		{
			for (;buf[i] >= '0' && buf[i] <= '9'&& buf[i] != '\0' && digit < 4;i++)
			{
				value = value * 10 + (buf[i] - '0');
				digit++;
			}
			digit = 0;
			i--;
		}
		i++;
		sum = sum + value;
		value = 0;
	}
	
	return sum;
}