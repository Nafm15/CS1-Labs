#pragma once
#ifndef VARARRAY_H
#define VARARRAY_H

// prints the values in "arrayPtr" of "size" 
void output(int *arrayPtr, int size);

// returns the index of the element in "arrayPtr" of "size"
// that corresponds to the element holding "number"
// if number is not in the array, returns -1
int check(int *arrayPtr, int number, int size);

// adds "number" to the array pointed to by "arrayPtr" of "size". 
// if the number is not already there, if "number" is there - no action
// Note, the size of the array is thus increased. 
void addNumber(int *& arrayPtr, int number, int &size);

// removes a "number" from the "arrayPtr" of "size".
// if "number" is not there -- no action
// note, "size" changes
void removeNumber(int *& arrayPtr, int number, int &size);

// Declaring structure 'array' as this is the most effective way to manipulate the array size
struct array {
	int size;
	int* data;
};
#endif // VARARRAY_H
