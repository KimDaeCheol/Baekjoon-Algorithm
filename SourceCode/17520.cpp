#include <iostream>
using namespace std;

long long dp[100001];

int main()
{
	int input, i;

	cin >> input;
	
	dp[0] = 1;

	for (i = 1; i <= input; i++)
	{
		if (i % 2 != 0)
		{
			dp[i] = dp[i - 1] << 1;
			dp[i] %= 16769023;
		}
		else
		{
			dp[i] = dp[i - 1];
			dp[i] %= 16769023;
		}
	}
	cout << dp[input] << endl;

	return 0;
}