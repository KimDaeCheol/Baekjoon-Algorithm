#include <iostream>
using namespace std;

int arr[1000001] = { 0,0 };

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int input, i;

	for (i = 2; i <= 1000000; i++)
	{
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0)
		{
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
		else if (i % 2 == 0)
		{
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}
	}
	
	cin >> input;

	cout << arr[input] << endl;
	return 0;
}