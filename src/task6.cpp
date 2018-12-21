int getSumMaxMin(int arr[], int N)
{
	int min = arr[0], max = arr[0];
	int posMin = 0, posMax = 0;
	int sum = 0;
	for (int i = 1; i < N; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			posMax = i;
		}
		else if (min > arr[i])
		{
			min = arr[i];
			posMin = i;
		}
	}
	if (posMax < posMin)
	{
		int temp = posMax;
		posMax = posMin;
		posMin = temp;
	}
	for (int i = posMin + 1; i < posMax; i++)
		sum += arr[i];
	return sum;
}
