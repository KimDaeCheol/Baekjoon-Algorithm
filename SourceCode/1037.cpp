#include <iostream>
using namespace std;

int main()
{
	int cnt, num, i;
	int max = 1;
	int min = 1000001;

	cin >> cnt;

	for (i = 0; i < cnt; i++)
	{
		cin >> num;

		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}

	cout << min * max << endl;
}