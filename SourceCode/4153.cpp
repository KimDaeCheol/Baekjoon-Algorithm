#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a, b, c;

	while (1)
	{
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}