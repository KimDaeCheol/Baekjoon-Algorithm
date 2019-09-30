#include <iostream>
using namespace std;

int main()
{
	int arr[4][2];
	int i, j;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;

	for (i = 0; i < 3; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			count1++;
			count2++;
		}
	}
	

	return 0;
}