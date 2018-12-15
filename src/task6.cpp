int getSumMaxMin(int arr[], int N)
{
	int i = 0, j = 0, sum = 0;

	for (int max = arr[i], min = arr[i], n = 0; n < N; n++)
	{
		if (arr[n] > max)
			i = n, max = arr[n];
		if (arr[n] < min)
			j = n, min = arr[n];
	}
	
	if (i < j)
	{
		for (; i + 1 < j; i++)
			sum = sum + arr[i + 1];
	}

	if (j < i)
	{
		for (; j + 1 < i; j++)
			sum = sum + arr[j + 1];
	}

	return sum;
}