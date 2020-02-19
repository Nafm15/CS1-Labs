#include <cstdlib>

#include <ctime>

#ifndef BATTLESHIP_H_

#define BATTLESHIP_H_

const int fleetSize = 5; // number of battleships

const int fieldSize = 5; // the field (ocean) is fieldSize * fieldSize

						 // coordinates (Location) of the ship and shots

struct Location {

	int x; // 1 through fieldSize

	char y; // 'a' through fieldSize

};

struct Ship {

	Location loc;

	bool sunk;

};

void initialize(Ship[]);

Location pick(); // generates a random Location

bool match(const Ship, Location);

int check(const Ship[], Location);

void deploy(Ship[]);

void printShip(const Ship);

void printFleet(const Ship[]);

bool operational(const Ship[]); // returns true if at least one ship in the array

								// is not sunk

Location fire();

void sink(Ship&); // sets "sunk" member variable of the ship to true

#endif /* BATTLESHIP_H_ */