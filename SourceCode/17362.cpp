#include <iostream>
using namespace std;

int main()
{
	int input;

	cin >> input;

	if ((input + 7) % 8 == 0)
	{
		cout << 1 << endl;
	}
	else if ((input + 3) % 8 == 0)
	{
		cout << 5 << endl;
	}
	else if ((input + 1) % 4 == 0)
	{
		cout << 3 << endl;
	}
	else if ((input + 2) % 4 == 0)
	{
		if (((input + 2) / 4) % 2 == 0)
		{
			cout << 4 << endl;
		}
		else
		{
			cout << 2 << endl;
		}
	}
	else if (input % 4 == 0)
	{
		if ((input/4) % 2 == 0)
		{
			cout << 2 << endl;
		}
		else
		{
			cout << 4 << endl;
		}
	}
	return 0;
}