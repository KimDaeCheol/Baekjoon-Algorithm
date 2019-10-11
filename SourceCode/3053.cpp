#include <iostream>
using namespace std;

int main()
{
	double input;
	double pi = 3.14159265358979;

	cin >> input;

	cout << fixed;
	cout.precision(6);

	cout << pi * input * input << endl;
	cout << (double)(2.0 * input*input) << endl;

	return 0;
}