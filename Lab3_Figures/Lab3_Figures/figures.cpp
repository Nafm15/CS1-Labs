#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	cout << "Input Number: ";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}

	cout << endl;
	cout << endl;

	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
				cout << "*";
			else if (j == 0)
				cout << "*";
			else if (i == n-1)
				cout << "*";
			else if (j == n-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

}