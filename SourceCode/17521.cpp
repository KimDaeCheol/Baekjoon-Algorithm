#include <iostream>
using namespace std;

long long arr[15];

int main()
{
	long long n, i;
	long long w;
	long long coin = 0;
	cin >> n >> w;

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < n; i++)
	{
		if (coin == 0 && arr[i] < arr[i + 1])
		{
			coin = w / arr[i];
			w -= (coin * arr[i]);
		}
		else if (coin != 0 && arr[i] > arr[i + 1])
		{
			w += (coin * arr[i]);
			coin = 0;
		}
		if (i == n - 1)
		{
			w += (coin * arr[i]);
			coin = 0;
		}
	}
	cout << w << endl;
	return 0;
}