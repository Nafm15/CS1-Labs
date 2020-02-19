#include <iostream>
#include "vararray.h"

using std::cout; using std::endl;


void testfunc(varArray); // function to test pass-by-value for varArray

int main() {

	varArray a1;

	// testing regular member functions
	a1.addNumber(1);
	a1.addNumber(2);
	a1.addNumber(3);
	a1.addNumber(3); // trying to add duplicate, should not add it

	cout << "array size is: " << a1.arraySize() << endl;

	if (a1.check(1) != -1) // check() returns -1 if number not present
		cout << "1 is present in the array" << endl;

	if (a1.check(5) != -1)
		cout << "5 is present in the array" << endl;

	a1.output();
	a1.removeNumber(2);
	a1.output();

	// uncomment this when you debugged the first part
	varArray a2, a3;

	a3 = a2 = a1; // testing overloaded assignment
	a3 = a3; // testing protection against self-assingment

	testfunc(a3); // testing copy constructor
	a3.output(); // if destructor is implemented correctly
				 // this should print properly after testfunc completes
}


// tests pass-by-value for object of class varArray
void testfunc(varArray va) { // copy constructor is invoked on "va"
	va.output();
} // destructor is invoked when "va" goes out of scope
