int getSumInt(int arr[], int N)
{
	int sum = 0, i = 0, j = N - 1;
	for (; i < N-1; i++)
	{
		if (arr[i] < 0)
		{
		break;
		}
	}
	for (i + 1; i + 1 <= j - 1; i++)
	{
		for (; j > i; j--)
		{
			if (arr[j] >= 0)
				break;
		}
		sum += arr[i+1];
	}
	return sum;
}