#include <iostream>
using namespace std;

int main()
{
	long long input;
	int distance = 1;
	cin >> input;

	if (input == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	while (1)
	{
		input -= 6 * distance;
		distance++;

		if (input <= 1)
			break;
	}
	cout << distance << endl;

	return 0;
}