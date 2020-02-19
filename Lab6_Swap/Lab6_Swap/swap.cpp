#include <iostream>

using std::cout; using std::cin; using std::endl;

void swap(int& a, int& b);

int main() {
	cout << "Input three numbers: ";
	int x, y, z;
	cin >> x >> y >> z;
	int tmp;

	// orders x and y
	if (x > y) {
		swap(x, y);
	}

	// orders y and z
	if (y > z) {
		swap(y, z);
	}

	//orders x and z
	if (x > y) {
		swap(x, y);
	}

	// outputs the sorted numbers
	cout << "The sorted numbers are: ";
	cout << x << " " << y << " " << z << endl;
}
void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}