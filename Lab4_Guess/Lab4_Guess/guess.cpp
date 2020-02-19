#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;
int main() {
	srand(time(nullptr));
	int n;
	cout << "I selected a number between 0 and 50, what is it?";
	int number;
	int guess;
	int tries = 0;
	number = rand() % 51;
	cout << endl;
	do {
		cin >> guess;

		if (guess == number) {
			cout << "Correct!" << endl;

		}
		else if (guess < number) {
			cout << "wrong, it is larger, what is it? ";
			tries++;
		}
		else if (guess > number) {
			cout << "wrong, it is smaller, what is it? ";
			tries++;
		}
		else
			cout << "The number is not in the range! ";
	} while (guess != number);
}