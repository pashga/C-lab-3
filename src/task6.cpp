int getSumMaxMin(int arr[], int N)
{
	int sum = 0, i = 0, j = 0, k = 0, max = 0, min=0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] > max)
			max = arr[i], j = i;
		if (arr[i] < min)
			min = arr[i], k = i;
	}
	if (j<k)
	{
		for (j=j+1; j < k; j++)
			sum = sum + arr[j];
	}
	if (j > k)
	{
		for (k=k+1; k < j; k++)
			sum = sum + arr[k];
	}

	return sum;
}