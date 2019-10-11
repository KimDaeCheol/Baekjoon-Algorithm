#include <iostream>
using namespace std;

int arr[15][15];

int main()
{
	int i, j, k, temp;
	int t, num1, num2;

	for (i = 1; i < 15; i++)
	{
		arr[0][i] = i;
	}

	for (i = 1; i < 15; i++)
	{
		for (j = 1; j < 15; j++)
		{
			temp = 0;
			for (k = 1; k <= j; k++)
			{
				temp += arr[i - 1][k];
			}
			arr[i][j] = temp;
		}
	}
	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> num1 >> num2;
		cout << arr[num1][num2] << endl;
	}

	return 0;
}