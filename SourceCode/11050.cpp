#include <iostream>
using namespace std;

int main()
{
	int n, k, i, temp;
	int result = 1;

	cin >> n >> k;

	temp = k;

	for (i = 0; i < temp; i++)
	{
		result *= n;
		n--;
	}

	for (i = 0; i < temp; i++)
	{
		result /= k;
		k--;
	}
	cout << result << endl;
	return 0;
}