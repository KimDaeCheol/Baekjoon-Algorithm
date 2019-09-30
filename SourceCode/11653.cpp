#include <iostream>
using namespace std;

int main()
{
	int input;
	int cnt = 2;
	cin >> input;

	while (1)
	{
		if (input == 1)
			break;
		while (input%cnt == 0)
		{
			cout << cnt << endl;
			input /= cnt;
		}
		cnt++;
	}

	return 0;
}