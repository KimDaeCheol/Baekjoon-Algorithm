#include <iostream>
using namespace std;

int main()
{
	int t, i;
	long long start, dest;
	long long count, temp, result;
	long long plus;

	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> start >> dest;
		count = (dest - start) + 1;

		temp = 1;
		plus = 1;
		result = 0;
		while (1)
		{
			temp += plus;
			result++;
			if (count <= temp)
				break;
			temp += plus;
			result++;
			if (count <= temp)
				break;
			plus++;
		}
		cout << result << endl;
	}

	return 0;
}