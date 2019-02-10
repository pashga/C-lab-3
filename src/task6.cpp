int getSumMaxMin(int arr[], int N)

{
	int i, min = 0, max = 0, sum = 0;

	for (i = 1; i < N; i++)
	{
		if (arr[i] < arr[min])
			min = i;
		else if (arr[i] > arr[max])
			max = i;
	}

	if (min > max)
	{
		i = min; min = max; max = i;
	}

	for (i = min + 1; i < max; i++)
		sum += arr[i];

	return sum;
}