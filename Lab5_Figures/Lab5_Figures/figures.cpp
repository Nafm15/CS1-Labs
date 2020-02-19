#include <iostream>
#include <cstdlib>
#include "figures.h"

using std::cout; using std::cin; using std::endl;

void input_prompt();
void square(int size);
void hollow_square(int size);
void top_left_triangle(int size);
void top_right_triangle(int size);

int main() {
	input_prompt();
	int figure;
	cin >> figure;

	cout << "What is the size of the figure (in number of stars on each side): ";
	int size;
	cin >> size;
	cout << endl;
	char type_of_square;
	
	if (figure == 1) {
		cout << "Filled or hollow [f/h]: ";
		cin >> type_of_square;
		if (type_of_square == 'f')
			square(size);
		else if (type_of_square == 'h')
			hollow_square(size);
		else
			cout << "Invalid Input";
		}
	else if (figure == 2) {
	top_left_triangle(size);
	}
	else if (figure == 3) {
	top_right_triangle(size);
	}
	else {
	cout << "Invalid Input.";
	}
	return 0;
	}


void input_prompt() {
	cout << "Enter a number to select what type of figure you'de like to output: " << endl;
	cout << "1 - Square" << endl;
	cout << "2 - Top Left Triangle" << endl;
	cout << "3 - Top Right Triangle" << endl;
}


void square(int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << "*";
		cout << endl;
	}
}

void hollow_square(int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == 0)
				cout << "*";
			else if (j == 0)
				cout << "*";
			else if (i == size - 1)
				cout << "*";
			else if (j == size - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void top_left_triangle(int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}

void top_right_triangle(int size) {
	for (int i = size; i >= 0; i--) {
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 0; j < size - i; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}
