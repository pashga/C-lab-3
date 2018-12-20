int getSumInt(int arr[], int N) 
{

	int indNeg = 0, indPos = 0;

	for (int i = 0; i < N; i++)//find index of the first negative number
	{
		if (arr[i] < 0)
		{
			indNeg = i;
			break;
		}
	}
	for (int i = N-1; i >= 0; i--)//find index of the last positive number
		if (arr[i] > 0)
		{
			indPos = i;
			break;
		}
	int sum = 0;
	if (indNeg < indPos)
	{
		for (int i = indNeg + 1; i < indPos; i++)
			sum += arr[i];
	}
	else if (indNeg > indPos)
	{
		sum = 0;
	}
		
	return sum;
}