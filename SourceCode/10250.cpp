#include <iostream>
using namespace std;

int main()
{
	int t, i;
	int h, w, n;
	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> h >> w >> n;

		if (n%h == 0)
		{
			cout << (n % h + h) * 100 + (n / h) << endl;
		}
		else
		{
			cout << n % h * 100 + (n / h + 1) << endl;
		}
	}
	return 0;
}