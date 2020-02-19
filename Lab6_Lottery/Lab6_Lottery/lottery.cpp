#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout; using std::cin; using std::endl;

void initialize(int[], int, int);
int check(int[], int, int);
void draw(int[], int);
int entry();
void printOut(int[], int, int);

int main() {
	const int size = 10;
	int wins[size];
	int initVal = -1;
	int guess;
	srand(time(NULL));

	initialize(wins, size, initVal);
	draw(wins, size);
	guess = entry();
	int f = check(wins, size, guess);
	if (f == -1) {
		cout << "You didn't win the lottery! Better luck next time..." << endl;
		printOut(wins, size, guess);
	}
	if (f == guess) {
		cout << "You won the lottery!! Congratulations!!" << endl;
		printOut(wins, size, guess);
	}
}

void initialize(int a[], int n, int val) {
	for (int i = 0; i < n; i++)
		a[i] = val;
}

int check(int a[], int n, int value) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == value)
			return i;
	}

	return -1;
}

void draw(int a[], int n) {
	int numSoFar = 0;
	while (numSoFar < n) {
		int num = rand() % 50;
		int e = check(a, n, num);
		if (e == -1) {
			a[numSoFar] = num;
			numSoFar++;
		}
	}
}

int entry() {
	int userInput;
	cout << "Enter your guess <1-50>: ";
	cin >> userInput;
	return userInput;
}

void printOut(int a[], int n, int user) {
	cout << "The winning numbers were: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}