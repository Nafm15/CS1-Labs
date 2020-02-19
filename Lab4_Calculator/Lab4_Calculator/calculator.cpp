#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	int n;
	int x;
	double a;
	double b;

	cout << "1. absolute value";
	cout << endl;
	cout << "2. square root";
	cout << endl;
	cout << "3. floor";
	cout << endl;
	cout << "4. power";
	cout << endl;
	cout << endl;
	do {
		cout << "Select an operation";
		cout << endl;
		cin >> n;

		switch (n) {
		case 1:
			cout << "Enter number: ";
			cin >> x;
			cout << "Absoulute Value = " << abs(x) << endl;
			break;
		case 2:
			cout << "Enter number: ";
			cin >> a;
			cout << "Square Root = " << sqrt(a) << endl;
			break;
		case 3:
			cout << "Enter number: ";
			cin >> a;
			cout << "The floor is = " << floor(a) << endl;
			break;
		case 4:
			cout << "Enter base: ";
			cin >> a;
			cout << "Enter exponent: ";
			cin >> b;
			cout << "The result is = " << pow(a, b) << endl;
			break;
			cout << endl;
		}
	} while (0 < n && n < 5);
	cout << endl;

}