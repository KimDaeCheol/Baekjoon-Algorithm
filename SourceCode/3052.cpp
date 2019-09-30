#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int arr2[42] = { 0 };
	int i;
	int cnt = 0;

	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr2[arr[i] % 42]++;
	}
	for (i = 0; i < 42; i++)
	{
		if (arr2[i] != 0)
			cnt++;
	}
	cout << cnt << endl;
}