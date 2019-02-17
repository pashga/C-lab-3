#define razryad 4

int getSum(char buf[])

{
	int i = 0, value = 0, sum = 0, razr = 0;
	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9' && razr < razryad)
		{
			value = value * 10 + (buf[i] - '0');
			razr++;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && razr >= razryad)
		{
			sum += value;
			value = 0;
			razr = 1;
			value = value * 10 + (buf[i] - '0');
		}
		else
		{
			sum += value;
			value = 0;
			razr = 0;
		}

		i++;

	}

	return sum;
}

	

