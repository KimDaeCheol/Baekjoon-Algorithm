#include <iostream>
using namespace std;

int main()
{
	long long a, b, v;
	int cnt = 1;
	long long cur = 0;
	cin >> a >> b >> v;

	cnt = (v - b - 1) / (a - b);

	cout << cnt + 1 << endl;

	return 0;
}