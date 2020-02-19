#include "battleship.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void location::pick()
{
	srand((unsigned)time(NULL));
	x = rand() % 5 + 1;
	y = 'a' + rand() % 5 + 1;
}

location::location()
{
	x = -1;
	y = -1;
}

void location::fire()
{
	cout << "Choose your x-axis firing coordinate! (1 - 5):" << endl;
	cin >> x;
	cout << "Choose your y-axis firing coordinate (a - e):" << endl;
	cin >> y;
}

void location::print(void) const
{
	cout << x << y;
}

bool compare(location one, location two)
{
	if (one.x == two.x && one.y == two.y)
		return true;
	else
		return false;
}

ship::ship()
{
	sunk = false;
}

bool ship::match(const location& userShot)
const {
	return compare(loc, userShot);
}

void ship::sink()
{
	sunk = true;
}

void ship::setLocation(const location& spot)
{
	loc = spot;
}

void ship::printShip(void)
const {
	loc.print();
	if (sunk == true)
		cout << " Sunk" << endl;
	else
		cout << " Not Sunk" << endl;
}

void fleet::deployFleet()
{
	for (int i = 0; i<5; i++)
	{
		location tmp;
		tmp.pick();
		ships[i].setLocation(tmp);

	}
}

bool fleet::operational()
const {
	for (int i = 0; i<5; i++)
	{
		if (ships[i].isSunk() == false)
			return true;
	}
	return false;
}

bool fleet::isHitNSink(const location& loc)
{
	for (int i = 0; i<5; i++)
	{
		if (ships[i].match(loc) == true)
		{
			ships[i].sink();
			return true;
		}
	}
	return false;
}

void fleet::printFleet(void)
const {
	for (int i = 0; i<5; i++)
	{
		ships[i].printShip();
	}
}