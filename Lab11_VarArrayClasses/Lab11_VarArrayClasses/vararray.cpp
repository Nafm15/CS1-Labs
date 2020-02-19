#include "varArray.h"

int main() {

	int number;
	char operation;
	varArray a1;

	do {
		cout << "Enter operation [a,r,q] and number:" << endl;
		cin >> operation;
		if (operation != 'q')
			cin >> number;
		if (operation == 'a') {
			a1.addNumber(number);
		}
		if (operation == 'r') {
			a1.removeNumber(number);
		}
		if (operation != 'q')
			a1.output();
	} while (operation != 'q');
	a1.output();
}