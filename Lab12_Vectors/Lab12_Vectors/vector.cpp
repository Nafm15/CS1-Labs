#include "header.h"

int main() {

	int number;
	char operation;
	vector<int> dynArray;

	do { // assigns letters to operations
		cout << "Enter operation [a,r,q] and number:" << endl;
		cin >> operation;
		if (operation != 'q')
			cin >> number;
		if (operation == 'a') {
			adder(number, dynArray);
		}
		if (operation == 'r') {
			subber(number, dynArray);
		}
		if (operation != 'q')
			output(dynArray);
	} while (operation != 'q');
	output(dynArray);
}