int getSum(char buf[])
{
	int i = 0;
	int sum = 0;
	int value = 0;
	int count = 0;

	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9'&& count<9)
		{
			value = value * 10 + (buf[i] - '0');
			count++;
			i++;
		}
		else if (count >= 9)
		{
			sum = sum + value;
			value = 0;
			count = 0;
		}
		else
		{
			sum = sum + value;
			value = 0;
			count = 0;
			i++;
		}
	
	}
	return sum;
}