int getSumInt(int arr[], int N)
{
	int i = 0, j = N - 1, sum = 0;
	
	for (; arr[i] >= 0; i++);
	
	for (; arr[j] <= 0; j--);
	
	for (; i + 1 < j; i++)
		sum = sum + arr[i + 1];
	
	return sum;
}