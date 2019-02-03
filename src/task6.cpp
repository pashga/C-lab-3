int getSumMaxMin(int arr[], int N)
{
	int i, mini = 0, maxi = 0,ans=0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] < arr[mini])
			mini = i;
		if (arr[i] > arr[maxi])
			maxi = i;
	}
	if (maxi < mini)
	{
		i = maxi;
		maxi = mini;
		mini = i;
	}
	for (i = mini+1; i <= maxi-1; i++)
		ans += arr[i];
	return ans;
}