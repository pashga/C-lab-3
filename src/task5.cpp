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
	int summa = 0;
	while (start < end)
	{
		summa += arr[start];
		start++;
	}

	return summa;
}
