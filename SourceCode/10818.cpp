#include <iostream>
using namespace std;

int arr[1000000];

int main()
{
	int input, i;
	cin >> input;
	int min = 1000001;
	int max = -1000001;

	for (i = 0; i < input; i++)
	{
		cin >> arr[i];

		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	cout << min << " " << max << endl;

	return 0;
}