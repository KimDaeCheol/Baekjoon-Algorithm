#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int result = 0;
	int i;

	cin >> input;

	for (i = 0; i < input.length(); i++)
	{
		if (input[i] == 'c' && (input[i + 1] == '=' || input[i + 1] == '-'))
		{
			result++;
		}
		else if (input[i]=='d' && ((input[i+1]=='z' && input[i+2]=='='))
	}
}