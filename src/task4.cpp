int getSum(char buf[])
{
	int n = 0, i = 0;
	int sum = 0;

	while (buf[i])
	{
		if (buf[i] >= '0'&&buf[i] <= '9')
			n = n * 10 + (buf[i] - '0');
		else
		{
			sum += n;
			n = 0;
		}
		i++;
	}
	return sum;
}