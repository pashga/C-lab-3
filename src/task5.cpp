int getSumInt(int arr[], int N)
{
	int sum = 0, i = 0, j=0, k=0;
	while (arr[i] > 0)
	{
		i++;
	}
	sum = arr[i + 1];
	while (arr[N-1] < 0)
	{
		N--;
	}
	
	if (i < N-2)
	{
		for (j = (i + 2); j < N - 1; j++)
			sum = sum + arr[j];
	}
	else (sum = 0);
	return sum;
}