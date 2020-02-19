#include "vararray.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

// prints the values in "arrayPtr" of "size"
void output(array& arr) {
	for (int i = 0; i < arr.size; ++i) {
		cout << arr.data[i] << endl;
	}
}

void insert(array& arr, int ele) {
	int* newarr = new int[arr.size + 1];
	memcpy(newarr, arr.data, arr.size);
	newarr[arr.size] = ele;
	delete arr.data;
	arr.data = newarr;
	arr.size += 1;
}
void output(int *arrayPtr, int size) {
	for (int i = 0; i < size; ++i)
		cout << arrayPtr[i] << " ";
	cout << endl;
}

// returns the index of the element in "arrayPtr" of "size"
// that corresponds to the element holding "number"
// if number is not in the array, returns -1
int check(int *arrayPtr, int number, int size) {

	for (int i = 0; i < size; i++) {
		//cout << "checking " << arrayPtr[i] << " == " << number << endl;
		if (arrayPtr[i] == number) {
			return i;
		}
	}
	return -1;
}

// adds "number" to the array pointed to by "arrayPtr" of "size". 
// if the number is not already there, if "number" is there - no action
// Note, the size of the array is thus increased. 
void addNumber(int *& arrayPtr, int number, int &size) {
	if (check(arrayPtr, number, size) != -1) {
		return;
	}
	//for (int i = 0; i < size; i++){
	//	if (arrayPtr[i] != number) {
	//		size++;
	//			*(arrayPtr + 1) = arrayPtr[i];
	//	}
	//}
	int* newarr = new int[size + 1];
	memcpy(newarr, arrayPtr, size * sizeof(int));
	newarr[size] = number;
	delete arrayPtr;
	arrayPtr = newarr;
	size += 1;
}

// removes a "number" from the "arrayPtr" of "size".
// if "number" is not there -- no action
// note, "size" changes
void removeNumber(int *& arrayPtr, int number, int &size) {
	//for (int i = 0; i < size; i++){
	//	if (arrayPtr[i] == number)
	//		delete &arrayPtr[i];
	//} 
	int* newarr = new int[size - 1];
	int i = 0, j = 0;
	while (i < size && j < size - 1) {
		if (arrayPtr[i] == number) {
			i++;
			continue;
		}
		newarr[j] = arrayPtr[i];
		++j;
		++i;
	}
	delete arrayPtr;
	arrayPtr = newarr;
	size = j;
}