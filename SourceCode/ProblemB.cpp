#include <iostream>
using namespace std;

int main()
{
	int a, b, n, w;
	int x, y;

	cin >> a >> b >> n >> w;

	if (a < b)
	{
		x = (b * n - w) / (b - a);
		y = n - x;
	}
	else if (a == b)
	{
		y = n / 2;
		x = n - y;

		if (x == y && x > 1)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	else
	{
		y = (a * n - w) / (a - b);
		x = n - y;
	}

	if (((x*a) + (y*b)) == w && ((x>0) && (y>0)))
	{
		cout << x << " " << y << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	return 0;
}