#include "battleship.h"

#include <iostream>

using std::cin; using std::cout; using std::endl;

void initialize(Ship fleet[]) {

	for (int i = 0; i < fleetSize; ++i) {

		fleet[i].loc.x = -1;

		fleet[i].loc.y = '*';

	}

}

Location pick() {

	Location tmp;

	tmp.x = rand() % fieldSize + 1;

	switch (rand() % fieldSize + 1) {

	case 1: tmp.y = 'a';

		break;

	case 2: tmp.y = 'b';

		break;

	case 3: tmp.y = 'c';

		break;

	case 4: tmp.y = 'd';

		break;

	case 5: tmp.y = 'e';

		break;

	}

	return tmp;

}

bool match(const Ship tmp1, Location tmp2) {

	if (tmp1.loc.x == tmp2.x && tmp1.loc.y == tmp2.y)

		return true;

	else

		return false;

}

int check(const Ship fleet[], Location tmp) {

	for (int i = 0; i < fleetSize; ++i) {

		if (fleet[i].loc.x == tmp.x)

			if (fleet[i].loc.y == tmp.y)

				return i;

	}

	return -1;

}

void deploy(Ship fleet[]) {

	for (int i = 0; i < fleetSize; ++i) {

		fleet[i].loc = pick();

		fleet[i].sunk = false;

	}

}

void printShip(const Ship tmp) {

	cout << "The Ship is at " << tmp.loc.x << tmp.loc.y << endl;

	if (tmp.sunk == false)

		cout << "The ship still floats!" << endl;

	else if (tmp.sunk == true)

		cout << "The ship went to the bottom!" << endl;

}

void printFleet(const Ship fleet[]) {

	cout << "The Ships are holding at:" << endl;

	for (int i = 0; i < fleetSize; ++i) {

		cout << fleet[i].loc.x << fleet[i].loc.y << endl;

		if (fleet[i].sunk == false)

			cout << "The ship still floats!" << endl;

		else if (fleet[i].sunk == true)

			cout << "The ship went to the bottom!" << endl;

	}

}

bool operational(const Ship fleet[]) {

	for (int i = 0; i < fleetSize; ++i) {

		if (fleet[i].sunk == true)

			return false;

		else

			return true;

	}

}

Location fire() {

	Location tmp;

	int inputx;

	char inputy;

	cout << "Input an integer 1-5" << endl;

	cin >> inputx;

	cout << "Input a letter a-e" << endl;

	cin >> inputy;

	tmp.x = inputx;

	tmp.y = inputy;

	return tmp;

}

void sink(Ship& ship) {

	ship.sunk = true;

}