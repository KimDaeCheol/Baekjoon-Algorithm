#include <iostream>
using namespace std;

int arr[100];

int GCD(int a, int b)
{
	int temp;
	if (a < b)
		swap(a, b);

	while (b)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main()
{
	int t, i, gcd;

	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> arr[i];
	}

	for (i = 1; i < t; i++)
	{
		gcd = GCD(arr[0], arr[i]);

		cout << (arr[0] / gcd) << "/" << (arr[i] / gcd) << endl;
	}

	return 0;
}