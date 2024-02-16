#include "Plane.h"
#include <iostream>
#include <array>

Plane::Plane(std::string start, std::string end)
	: origin(start), destination(end),
	pos(0.0), vel(0.0), distance(0.0), at_SCE(0) // initializing values
{ // Implementations
	std::cout << "Plane created at: " << this << std::endl;
	
	//finds the index of the destination airport and updates the corresponding distance
	for (int i = 0; i < size(airportNames); i++) 
	{
		// Always either starting or ending from SCE. So we only check the other airport name
		if ( (origin.compare(airportNames[i]) ) || (destination.compare(airportNames[i]) ) )	{
			distance = airportDistances[i];
		}
	}
}

// Basic functions that return or change the object's values
double Plane::getPos() { return pos; }
double Plane::getVel() { return vel;  }
void Plane::setVel(double newVel) { vel = newVel; }
std::string	Plane::getOrigin() { return Plane::origin; }
std::string	Plane::getDestination() { return destination; }
void Plane::Operate(double dt) {}
bool Plane::get_at_SCE() { return at_SCE; }