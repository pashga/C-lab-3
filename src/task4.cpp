int getSum(char buf[])
{
	int i = 0, state = 0, value = 0, sum = 0;
	int count = 0;

	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9' && state == 0)
		{
			value = 0, count = 0;
			state = 1;
		}

		else if ((buf[i] < '0' || buf[i] > '9') && state == 1)
		{
			state = 0;
			sum = sum + value;
			i++;
			continue;
		}
		if (count < 9)
			value = value * 10 + (buf[i] - '0'), count++;
		i++;
	}

	return sum;
}