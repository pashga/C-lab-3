int getSumMaxMin(int arr[], int N)
{
	int max = arr[0];
	int min = arr[0];
	int maxInd = 0, minInd = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxInd = i;
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			minInd = i;
		}
	}
	int sum = 0;
	int i = 0;
	if (maxInd < minInd)
	{ 
		for (i = maxInd+1; i < minInd; i++)
		{
			sum += arr[i];
		}	
	}
	else if (minInd < maxInd)
	{
		for (i = minInd+1; i < maxInd; i++)
		{
			sum += arr[i];
		}
	}
	return sum;
}
