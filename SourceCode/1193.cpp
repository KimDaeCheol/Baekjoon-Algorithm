#include <iostream>
using namespace std;

int main()
{
	int input, i;
	int cnt = 2;
	cin >> input;

	for (i = 1;; i++)
	{
		if (input <= i)
			break;
		input -= i;
		cnt++;
	}
	if (cnt%2==0)
	{
		cout << (cnt - 1) - (input-1) << "/" << 1 + (input-1) << endl;
	}
	else
	{
		cout << 1 + (input-1) << "/" << (cnt-1) - (input-1) << endl;
	}

	return 0;
}