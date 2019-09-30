#include <iostream>
using namespace std;

long long arr[1000000] = { 1,2 };

int main()
{
	int input, i;
	cin >> input;
	
	for (i = 2; i < input; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 1];
		arr[i] %= 15746;
	}
	cout << arr[input - 1] << endl;
	return 0;
}