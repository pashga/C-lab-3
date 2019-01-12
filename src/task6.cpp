int getSumMaxMin(int arr[], int N)
{
	int sum = 0, i = 0, max = 0, min = 0, count1 = 0, count2 = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			count1 = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			count2 = i;
		}
	}
	if (count1 < count2)
	{
		for (count1 = count1 + 1; count1 < count2; count1++)
			sum += arr[count1];
	}
	if (count2 < count1)
	{
		for (count2 = count2 + 1; count2 < count1; count2++)
			sum += arr[count2];
	}
	if ((count2 + 1 == count1) || (count1 + 1 == count2))
			sum = 0;
	return sum;
}