#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long input;
	int i;

	cin >> input;

	for (i = 1; (((long long)(i + 1) << (long long)(i + 1)) - 1) < input;i++);

	cout << i << endl;


	return 0;
}