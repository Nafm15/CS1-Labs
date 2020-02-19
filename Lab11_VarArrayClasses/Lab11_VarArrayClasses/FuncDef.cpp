#include "varArray.h"

// function checks the array for the number
int varArray::check(int number) {
	for (int i = 0; i < size; i++) {
		if (dArray[i] == number) {
			return i;
		}
	}
	return -1;
}

// adds number to array
void varArray::addNumber(int number) {
	int *tmp;
	tmp = new int[size + 1];
	for (int i = 0; i < size; i++) {
		tmp[i] = dArray[i];
	}
	tmp[size] = number;
	size++;
	delete dArray;
	dArray = tmp;
}

// removes number from array
void varArray::removeNumber(int number) {
	int index = check(number);
	if (index < 0) {
		return;
	}
	int *tmp = new int[size - 1];
	for (int i = 0; i < index; i++) {
		tmp[i] = dArray[i];
	}
	for (int i = index + 1; i < size; i++) {
		tmp[i - 1] = dArray[i];
	}
	size--;
	delete dArray;
	dArray = tmp;
}

//  Outputs Array
void varArray::output() {
	for (int i = 0; i < size; i++) {
		cout << dArray[i] << ' ';
	}
	cout << endl;
}

//  Void Constructor
varArray::varArray() {
	size = 0;
}

//  Destructor
varArray::~varArray() {
	delete dArray;
}

//  Copy Constructor
varArray::varArray(const varArray& org) {
	size = org.size;
	dArray = new int[size];
	for (int i = 0; i < size; ++i) {
		dArray[i] = org.dArray[i];
	}
}

//  Overloaded Assignment
varArray& varArray::operator=(const varArray& va) {
	size = va.size;
	delete[] dArray;
	dArray = new int[size];
	for (int i = 0; i < size; ++i) {
		dArray[i] = va.dArray[i];
	}
	return *this;
}