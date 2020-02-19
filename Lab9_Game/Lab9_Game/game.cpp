#include "battleship.h"
#include <iostream>
#include <ctime>

using std::cout; using std::cin; using std::endl; using std::ctime;


/// this is main function
int main()
{
	fleet myFleet;
	srand(time(NULL));
	myFleet.deployFleet();
	do
	{
		location shot;
		shot.fire();
		if (myFleet.isHitNSink(shot))
		{
			cout << "Hit!" << endl;
		}
		else
			cout << "Miss!" << endl;
	} while (myFleet.operational());
	cout << "You sunk all of the Battleships!" << endl;
}