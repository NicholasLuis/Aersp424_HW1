#include "Plane.h"
#include <iostream>
#include <array>

// Plane class definition for question 4

Plane::Plane(std::string start, std::string end) // Constructor
	: origin(start), destination(end),
	pos(0.0), vel(0.0), distance(0.0), at_SCE(0) // initializing values
{ // Implementations
	std::cout << "Plane created at: " << this << std::endl;
	
	//finds the index of the destination airport and updates the corresponding distance
	for (int i = 0; i < size(airportNames); i++) 
	{
		// Always either starting or ending from SCE. So we only check the other airport name
		if ( (origin == airportNames[i] ) || (destination == airportNames[i] ) )	{
			distance = airportDistances[i];
		}
	}
}

Plane::~Plane() { // Deconstructor 
	std::cout << "\nPlane Destroyed" << std::endl;
}

// Basic functions that return or change the object's values
double Plane::getPos() { return pos; }
double Plane::getVel() { return vel;  }
void Plane::setVel(double newVel) { vel = newVel; }
std::string	Plane::getOrigin() { return Plane::origin; }
std::string	Plane::getDestination() { return destination; }
bool Plane::get_at_SCE() { return at_SCE; }

void Plane::Operate(double dt) { // Checks if at the destination yet. If not continues towards destination
	if (pos < distance) {
		pos += vel*(double (dt/3600) ); // Converts seconds to hours to get pos in miles
		at_SCE = 0; // 0 = false; Not there yet
	}
	else {
		if (destination == "SCE") { at_SCE = 1; }

		// Swaps the value of origin and destination;
		std::string newDestination = origin;
		origin = destination;
		destination = newDestination;

		pos = 0.0;
	}

	//Check if time-related variables are < 0
	if (pos < 0) { pos = 0; }
	if (vel < 0) { vel = 0; }
}
