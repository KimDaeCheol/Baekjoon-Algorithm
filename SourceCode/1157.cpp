#include <iostream>
#include <string>
using namespace std;

long long arr[26] = { 0 };

int main()
{
	string str;
	int i;
	long long max = -1;
	int index = -1;
	char result;
	cin >> str;

	for (i = 0; i < str.length(); i++)
	{
		if (str[i] > 96)
			str[i] -= 32;
		arr[str[i] - 65]++;
	}

	for (i = 0; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (max == arr[i] && i != index)
		{
			cout << "?" << endl;
			return 0;
		}
	}

	cout << (char)(index + 65) << endl;
	return 0;
}