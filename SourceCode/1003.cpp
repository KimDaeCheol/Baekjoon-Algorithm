#include <iostream>
using namespace std;

long long result1[41] = { 1,0 };
long long result2[41] = { 0,1 };

int main()
{
	int t, n, i, j;

	cin >> t;

	for (j = 2; j < 41; j++)
	{
		result1[j] = result1[j - 2] + result1[j - 1];
		result2[j] = result2[j - 2] + result2[j - 1];
	}

	for (i = 0; i < t; i++)
	{
		cin >> n;
		cout << result1[n] << " " << result2[n] << endl;
	}
}