int getSumMaxMin(int arr[], int N)
{
	int min = 0, max = 0, indexMin, indexMax;
	int sum = 0;

	for (int i = 0; i < N; i++)  //looking for index of min and max elements
	{

		if (min < arr[i])
		{
			min = arr[i];
			indexMin = i;
		}
		else if (max > arr[i])
		{
			max = arr[i];
			indexMax = i;
		}
	}

	if (indexMin > indexMax)
	{
		int a = indexMin;
		indexMin = indexMax;
		indexMax = a;
	}

	for (int i = indexMin + 1; i < indexMax; i++)  //sum of elements betwin first min and first max 
		sum += arr[i];
	
	return sum;
}