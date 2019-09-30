#include <iostream>
using namespace std;

long long arr[100] = { 1,1,1,2,2 };

int main()
{
	int ca, i , j, num;

	cin >> ca;

	for (i = 0; i < ca; i++)
	{
		cin >> num;

		for (j = 5; j < num; j++)
		{
			arr[j] = arr[j - 1] + arr[j - 5];
		}
		cout << arr[num-1] << endl;
	}
	return 0;
}