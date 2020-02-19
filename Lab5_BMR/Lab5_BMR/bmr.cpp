#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using std::cin; using std::cout; using std::endl;

const int Calories = 245;

double bmrWomen(int height, int weight, int years);
double bmrMen(int height, int weight, int years);
int numBagels(double bmr);
int heightConverter(int feet, int inches);
char genderConverter(char gender);
int bmrWomenCalc();
int bmrMenCalc();


int main() {
	cout << "Enter your gender (M or F)" << endl;
	char gender;
	cin >> gender;
	gender = genderConverter(gender);
	if (gender == 'm') {
		bmrMenCalc();
	}
	else if (gender == 'f') {
		bmrWomenCalc();
	}
	else {
		cout << "Error" << endl;
		return 1;
	}
	return 0;
}
double bmrWomen(int weight, int height, int years) {
	return 655 + (4.3 * weight) + (4.7 * height) - (4.7 * years);

}
double bmrMen(int weight, int height, int years) {
	return 66 + (6.3 * weight) + (12.9 * height) - (6.8 * years);
}
int numBagels(double bmr) {
	return floor(bmr / Calories);
}
int heightConverter(int feet, int inches) {
	return (feet * 12) + inches;
}
char genderConverter(char gender) {
	if (gender == 'm' || gender == 'M') {
		return 'm';
	}
	else if (gender == 'f' || gender == 'F') {
		return 'f';
	}
	else {
		return 'x';
	}
}
int bmrWomenCalc() {
	int weight;
	int feet;
	int inches;
	int years;
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your height in feet and inches: ";
	cin >> feet >> inches;
	cout << "Enter your age in years: ";
	cin >> years;
	int height;
	height = heightConverter(feet, inches);
	double bmr;
	bmr = bmrWomen(weight, height, years);
	int age;
	int bagels;
	bagels = numBagels(bmr);
	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << bagels << endl;
	return 0;
}
int bmrMenCalc() {
	int weight;
	int feet;
	int inches;
	int years;
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your height in feet and inches: ";
	cin >> feet >> inches;
	cout << "Enter your age in years: ";
	cin >> years;
	int height;
	height = heightConverter(feet, inches);
	double bmr;
	bmr = bmrMen(weight, height, years);
	int age;
	int bagels;
	bagels = numBagels(bmr);
	cout << "Your BMR is: " << bmr << endl;
	cout << "You can eat " << bagels << endl;
	return 0;
}