#ifndef PilotClass_H
#define PilotClass_H
#include "Pilot.h"

Pilot::Pilot(std::string pilotName) : name(pilotName) // Constructor
{
	std::cout << "Pilot Name: " << pilotName << ",\tMemory Address: " << this << std::endl;
}

std::string Pilot::getName() { return Pilot::name; }

#endif