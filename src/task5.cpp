int getSumInt(int arr[], int N)
{
	int i, j = 0, k = 0, sum = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			j = i ;
			break;
		}	
	}
	for (i = N - 1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			k = i;
			break;
		}
	}
	for (i = j+1; i < k; i++)
	{
		sum += arr[i];
	}
	return sum;
}