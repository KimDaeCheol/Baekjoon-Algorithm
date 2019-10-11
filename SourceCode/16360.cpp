#include <iostream>
using namespace std;

int main()
{
	int t, i;
	string input;

	cin >> t;

	for (i = 0; i < t; i++)
	{
		cin >> input;

		if (input[input.length() - 1] == 'a')
		{
			input.append("s");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'i')
		{
			input.append("os");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'l')
		{
			input.append("es");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'o')
		{
			input.append("s");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'r')
		{
			input.append("es");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 't')
		{
			input.append("as");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'u')
		{
			input.append("s");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'v')
		{
			input.append("es");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'w')
		{
			input.append("as");
			cout << input << endl;
		}
		else if (input[input.length() - 2] == 'n' && input[input.length() - 1] == 'e')
		{
			input.erase(input.end()-1);
			input.erase(input.end()-1);
			input.append("anes");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'n')
		{
			input.erase(input.end()-1);
			input.append("anes");
			cout << input << endl;
		}
		else if (input[input.length() - 1] == 'y')
		{
			input.erase(input.end()-1);
			input.append("ios");
			cout << input << endl;
		}
		else
		{
			input.append("us");
			cout << input << endl;
		}
	}

	return 0;
}