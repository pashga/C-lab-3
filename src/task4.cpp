int getSum(char buf[])
{
	int sum = 0, value=0, i=0, n=0;
	while (buf[i] != '\0')
	{
		if (buf[i] >= '0'&& buf[i] <= '9')
		{
			for (; buf[i] >= '0'&& buf[i] <= '9' && n < 4; i++)
			{
				value = value * 10 + (buf[i] - '0');
				n++;
			}
			n = 0;
			i--;
		}
		sum += value;
		value = 0;
		i++;
	}
	return sum;
}
