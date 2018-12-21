#define bitMax 5
int getSum(char buf[])
{
	int sum = 0, num = 0;
	short bit = 0;

	int i = -1;
	do
	{
		i++;
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			bit++; num = num * 10 + buf[i] - '0';
			if (bit == bitMax)
			{
				sum += num;
				bit = 0;
				num = 0;
			}
		}
		else if(bit!=0) 
		{
			sum += num;
			bit = 0;
			num = 0;
		}
	} while (buf[i] != '\0');
	return sum;
}