int getSumMaxMin(int arr[], int N)
{
	int i = 0, j = 0, max = 0, min = 0;
	int point1 = 0, point2 = 0, sum = 0;
	for (i = 0; i < N; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			point1 = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			point2 = i;
		}
	}
	if (point1 > point2)
		for (j = point2 + 1; j < point1; j++)
			sum += arr[j];
	else
		for (j = point1 + 1; j < point2; j++)
			sum += arr[j];
	return sum;
}