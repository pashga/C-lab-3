int getSumInt(int arr[], int N)
{
	int end = N;
	while (arr[end] < 0)//поиск последнего положительного
		end--;
	int start = 0;
	while (arr[start] >= 0)//поиск первого отрицательного
		start++;
	if (start > end)
	{
		int temp = end;
		end = start;
		start = temp;
	}
	start++;
	int sum = 0;
	while (start < end)
	{
		sum += arr[start];
		start++;
	}

	return sum;
}
