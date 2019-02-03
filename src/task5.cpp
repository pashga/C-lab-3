int getSumInt(int arr[], int N)
{
	int i = 0, ans = 0,begin,end;
	while (arr[i] >= 0)
		i++;
	begin = i;
	i = N - 1;
	while (arr[i] <= 0)
		i--;
	end = i;
	for (i = begin+1; i <= end-1; i++)
		ans += arr[i];
	return ans;
}