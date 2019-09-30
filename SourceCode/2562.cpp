#include <iostream>
using namespace std;

int main()
{
	int arr[9];
	int loc = -1;
	int max = 0;
	int i;

	for (i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
			loc = i;
		}
	}
	cout << max << '\n' << loc+1 << endl;
}