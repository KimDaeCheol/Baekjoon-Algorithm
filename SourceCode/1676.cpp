#include <iostream>
using namespace std;

int main()
{
	int input, i;
	int result = 0;

	cin >> input;

	for (i = 1; i <= input; i++)
	{
		if (i % 5 == 0)
		{
			result++;
		}
		if (i % 25 == 0)
		{
			result++;
		}
		if (i % 125 == 0)
		{
			result++;
		}
	}
	cout << result << endl;

	return 0;
}