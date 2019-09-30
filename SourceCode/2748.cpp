#include <iostream>
using namespace std;

int arr[90] = { 0, 1 };

int main()
{
	int input, i;
	cin >> input;

	for (i = 2; i <= input; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	cout << arr[input] << endl;
	return 0;
}