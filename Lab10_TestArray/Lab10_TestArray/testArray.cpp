#include "varArray.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	int size = 5;  // setting array size (No, setting var 'size' equal to 5...). And this could have been initialized below
	int *a = new int[size]; // allocating dynamic array (this creates an array with 5 elements) (Why wouldn't you pass 'size' in here?)

	array arr1;
	arr1.data = new int[size];
	arr1.size = size;

	// initializing array
	a[0] = 0; a[1] = 10; a[2] = 20; a[3] = 30; a[4] = 40; // would have been easier with a for loop for (int i=0; i<=40;i+=10){a[i]=i} bam! done! array initialized...

	output(a, size); // printing out the array (invokes function 'output' with parameters array a and size (which is set equal to 5))

					 // asking user to input a number
	cout << "Input number to search for: "; //message to user
	int number; // initialize int number
	cin >> number; // user input is stored in var number
				   // checking if the input number is in the array 
	int index = check(a, number, size); // initializes integer index and sets is equal to the return value of check function
	if (index == -1) // index is equal to negative one
		cout << "The number is not in the array" << endl; //display this message
	else
		cout << "The number is at position " << index << endl; // The check function looks for the index position of a number


															   // adding a new number to array
	addNumber(a, 55, size); // passes the number 55 as var number to increase the size of the array
	cout << "new size: " << size << endl;
	cout << "Array after adding a new number: "; output(a, size); // user message plus the return value of function 'output'

																  // adding a duplicate number to array
																  // the function should not add it
	addNumber(a, 20, size); // invoking function addNumber and attempts to pass the number 20 into the arrary which is already a value that exists
	cout << "Array after adding existing number: "; output(a, size); // array should be unaffected

																	 // this function removes the number 10 from the array *a
	removeNumber(a, 10, size);
	cout << "Array after removing number: "; output(a, size);

	// good code practice (free the memory)
	delete[] a; // deallocating the array
}
