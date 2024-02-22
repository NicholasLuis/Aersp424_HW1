#ifndef PilotClass_H
#define PilotClass_H

#include <iostream>
#include "Plane.h"

// Pilot class header from question 6 & 7

class Pilot {
private: 
	std::string name;
public: 
	Pilot(std::string pilotName, Plane* pilotsPlane); // Constructor
	~Pilot(); // Deconstructor
	
	Plane* MyPlane; // Pointer to plane object

	// Functions
	std::string getName();
	Plane* getPlaneMemory();
};

#endif