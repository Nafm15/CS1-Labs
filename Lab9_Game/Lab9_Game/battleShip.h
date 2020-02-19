#pragma once
#ifndef BATTLESHIP_H_
#define BATTLESHIP_H_

// coordinates (location) of the ship and shots
class location {
public:
	location(); // void constructor, assigns -1 to X 
	void pick(); // picks a random location
	void fire(); // asks the user to input coordinates of the next shot
	void print() const; // prints location in format "a1"

						// returns true if the two locations match
	friend bool compare(location, location);

private:
	static const int fieldSize = 5; // the field (ocean) is fieldSize X fieldSize
	int x;  // 1 through fieldSize
	char y; // 'a' through fieldSize
};

// contains ship's coordinates (location) and whether is was sunk
class ship {
public:
	ship(); // void constructor, sets sunk=false
	bool match(const location&) const; // returns true if this location matches
									   // the ship's location
	bool isSunk() const { return sunk; } // checks to see if the ship is sunk
	void sink();       // sets "sunk" member variable of the ship to true
	void setLocation(const location&); // deploys the ship at the specified location
	void printShip() const; // prints location and status of the ship

private:
	location loc;
	bool sunk;
};

// contains the fleet of the deployed ships
class fleet {
public:
	void deployFleet(); // deploys the ships in random locations
						// of the ocean
	bool operational() const; // returns true if at least
							  // one ship in the fleet is not sunk
	bool isHitNSink(const location &); // returns true if there was a deployed
									   // ship at this location (hit) and sinks it
									   // otherwise returns false (miss)
	void printFleet() const; // prints out locations of ships in fleet

private:
	static const int fleetSize = 5; // number of battleships
	int check(const location &) const;  // returns index of the ship 
										// that matches location
										// -1 if none match
	ship ships[fleetSize];        // battleships of the fleet
};

#endif /* BATTLESHIP_H_ */