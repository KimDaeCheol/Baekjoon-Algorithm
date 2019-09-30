#include <iostream>
#include <string>
using namespace std;

int arr[2];

long long count(int a)
{
	int i;
	long long result = 0;
	long long temp = 1;
	for (i = a; i > 0; i--)
	{
		temp *= i;
		temp %= 1000000007;
		result += temp;
		result %= 1000000007;
	}
	return result;
}

int main()
{
	int input, i;
	string s;
	cin >> input;

	long long sum = 0;

	long long cnt1 = 0;
	long long cnt2 = 0;
	long long cnt3 = 0;

	long long sub1 = 0;
	long long sub2 = 0;
	long long tosub = 0;

	for (i = 0; i < input; i++)
	{
		cin >> s;
		arr[0] = s.find_first_of('N');
		arr[1] = s.find_last_of('C');

		if (arr[0] == -1)
			cnt1++;
		else if (arr[1] == -1)
			cnt2++;
		else if (arr[0] > arr[1])
			cnt3++;
	}

	sum = count(input);
	sub1 = count(cnt1);
	sub2 = count(cnt2);

	tosub = sub1 * (1 + cnt3 + sub2) + sub2 * (1 + cnt3) + cnt3 + ((sub1*sub2)%1000000007*cnt3);
	tosub %= 1000000007;
	if (sum < tosub) {
		sum += 1000000007;
	}
	sum -= tosub;

	cout << sum << endl;

	return 0;
}