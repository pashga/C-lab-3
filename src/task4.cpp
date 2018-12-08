int getSum(char buf[])
{
	int max = 99999;
	int i=0,ans=0,cur=0;
	while (buf[i])
	{
		if (buf[i] >= '0'&&buf[i] <= '9')
		{
			while (buf[i] && (buf[i] >= '0'&&buf[i] <=  '9')&&cur < max)
			{
				cur = cur * 10 + buf[i]-'0';
				i++;
			}
			ans += cur;
			cur = 0;
			i--;
		}
		i++;
	}
	return ans;
}