#include "Pilot.h"

Pilot::Pilot(std::string pilotName, Plane* pilotsPlane) : name(pilotName), MyPlane(pilotsPlane) // Constructor
{
	std::cout << pilotName << " is at the gate ready to board the plane. Employee ID: " << this << std::endl;
}
Pilot::~Pilot()
{
	std::cout << "\nPilot " << name << " is out of the plane.Employee ID : " << this << std::endl;
}

std::string Pilot::getName() { return Pilot::name; }
Plane* Pilot::getPlaneMemory() { return Pilot::MyPlane; }