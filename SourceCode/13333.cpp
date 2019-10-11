#include <iostream>
using namespace std;

int arr[1000];

int main()
{
	int num, i, temp, j, k;
	cin >> num;
	temp = num;

	for (i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	while (num > 0)
	{
		j = 0;
		k = 0;
		for (i = 0; i < temp; i++)
		{
			if (arr[i] >= num)
				j++;
			else
				k++;
		}
		if (j>=num && k<=temp-num)
			break;
		num--;
	}
	cout << num << endl;

	return 0;
}