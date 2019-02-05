#define DIGIT 3

int getSum(char buf[])
{
	int i = 0, value = 0, sum = 0, dig = 0;
	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9' && dig < DIGIT)
		{
			value = value * 10 + (buf[i] - '0');
			dig++;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && dig >= DIGIT)
		{
			sum += value;
			value = 0;
			dig = 1;
			value = value * 10 + (buf[i] - '0');
		}
		else
		{
			sum += value;
			value = 0;
			dig = 0;
		}
		i++;
	}
	return sum;
}