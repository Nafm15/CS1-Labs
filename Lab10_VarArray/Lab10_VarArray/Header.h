#pragma once
#include <iostream>

using namespace std;

#ifndef VARARRAY_H_
#define VARARRAY_H_

void addNumber(int *& arrayPtr, int number, int &size);

void removeNumber(int *& arrayPtr, int number, int &size);

void copyArray(int *original, int *& copy, int size);

void output(int *arrayPtr, int size);

#endif