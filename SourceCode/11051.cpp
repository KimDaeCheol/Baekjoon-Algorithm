#include <iostream>
using namespace std;

int arr[1000][1000];

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n, k;
	int i, j;

	for (i = 0; i < 1000; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}

	cin >> n >> k;

	for (i = 2; i <= n; i++)
	{
		for (j = 1; j < max(i, k); j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			arr[i][j] %= 10007;
		}
	}
	cout << arr[n][k] << endl;

	return 0;
}