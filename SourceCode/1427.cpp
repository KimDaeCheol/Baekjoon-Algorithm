#include <iostream>
#include <cmath>
using namespace std;

int arr[10];

int main()
{
	long long input;
	int i = 0;
	int j, k, min;

	cin >> input;

	while (input != 0)
	{
		arr[i] = input % 10;
		input /= 10;
		i++;
	}
	
	for (j = 0; j < i; j++)
	{
		min = j;
		for (k = j + 1; k < i; k++)
		{
			if (arr[min] > arr[k])
				min = k;
		}
		swap(arr[min], arr[j]);
	}

	for (j = 0; j < i; j++)
	{
		input += (arr[j] * pow((double)10, j));
	}
	cout << input << endl;

	return 0;
}