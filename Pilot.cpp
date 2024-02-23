#include "Pilot.h"

// Pilot class definition from question 6 & 7


Pilot::Pilot(std::string pilotName, Plane* pilotsPlane)  // Constructor for Old CPP-style pointer
{
	//Initialized variables
	this->name = pilotName;
	this->MyPlane = pilotsPlane;

	std::cout << pilotName << " is at the gate ready to board the plane. Employee ID: " << this << std::endl;
}
/* // Uncomment to use modern cpp-style pointer
Pilot::Pilot(std::string pilotName, std::shared_ptr<Plane> pilotsPlane) // Constructor for modern CPP-style pointer
{
	//Initialized variables
	this->name = pilotName;
	this->MyPlane_MODERN = pilotsPlane;

	std::cout << pilotName << " is at the gate ready to board the plane. Employee ID: " << this << std::endl;
}
*/
Pilot::~Pilot() // Deconstructor
{
	std::cout << "\nPilot " << name << " is out of the plane.Employee ID : " << this << std::endl;
}

std::string Pilot::getName() { return Pilot::name; }

Plane* Pilot::getPlaneMemory() { return Pilot::MyPlane; }
// std::shared_ptr<Plane> Pilot::getPlaneMemory_MODERN() { return Pilot::MyPlane_MODERN; } // function for modern cpp-style pointer