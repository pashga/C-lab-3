int getSumInt(int arr[], int N)
{
	int i = 0, j = N - 1;
	int start = 0, finish = 0, sum = 0;
	while (arr[i] > 0)
		i++;
	start = i;
	while (arr[j] < 0)
		j--;
	finish = j;
	for (i = start + 1; i < finish; i++)
		sum += arr[i];
	return sum;
}