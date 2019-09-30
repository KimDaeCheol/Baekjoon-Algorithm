#include <iostream>
using namespace std;

int main()
{
	int input, i;
	int result = 1;

	cin >> input;

	for (i = input; i > 1; i--)
	{
		result *= i;
	}
	cout << result << endl;
	return 0;
}