#include <iostream>
using namespace std;

int main()
{
	int input;
	int i;
	int a, b;

	cin >> input;

	for (i = 0; i < input; i++)
	{
		cin >> a >> b;

		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << endl;
	}

	return 0;
}