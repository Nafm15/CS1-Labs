#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	cout << "Input number [0 to quit]: ";
	int n;
	cin >> n;
	int sum = 0;
	if (n < 0)
		sum = n;
	while (n != 0) {
		cin >> n;
		if (n < 0)
			sum = sum + n;
	}
	cout << "Sum of negative number: " << sum << endl;
}