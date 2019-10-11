#include <iostream>
using namespace std;

int dp[100001];

int main()
{
	int input, i, j;
	cin >> input;

	for (i = 1; i <= input; i++)
	{
		for (j = 1; j * j <= i; j++)
		{
			if (dp[i] > dp[i - j * j] + 1 || dp[i] == 0)
			{
				dp[i] = dp[i - j * j] + 1;
			}
		}
	}
	cout << dp[input] << endl;
	return 0;
}