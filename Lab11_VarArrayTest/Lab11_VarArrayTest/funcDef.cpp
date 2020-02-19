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
}

varArray::varArray(const varArray &)
{
}

varArray & varArray::operator=(const varArray &i)
{
	varArray ob = i;
	return ob;
}

varArray::~varArray()
{
}

//  Void Constructor
varArray::varArray() {
	size = 0;
}