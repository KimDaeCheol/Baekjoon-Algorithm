#include <iostream>
using namespace std;

int arr[10001];
int dp[10001];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int t, i;
	cin >> t;

	for (i = 1; i <= t; i++)
		cin >> arr[i];

	dp[1] = arr[1];
	dp[2] = arr[2] + arr[1];

	for (i = 3; i <= t; i++)
	{
		dp[i] = max(max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]), dp[i - 1]);
	}
	cout << dp[t] << endl;
	return 0;
}