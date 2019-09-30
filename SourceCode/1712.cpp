#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int x;

	cin >> a >> b >> c;

	if (b >= c)
	{
		cout << -1 << endl;
		return 0;
	}

	x = a / (c - b);

	cout << x + 1 << endl;
	return 0;
}