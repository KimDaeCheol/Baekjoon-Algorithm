#include <iostream>
using namespace std;

int main()
{
	int num1, num2, lcm, temp;

	cin >> num1 >> num2;
	lcm = num1 * num2;

	if (num1 < num2)
		swap(num1, num2);

	while (num2)
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << num1 << endl;
	cout << lcm / num1 << endl;

	return 0;
}