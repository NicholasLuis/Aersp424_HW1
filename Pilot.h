#ifndef PilotClass_H
#define PilotClass_H

#include <iostream>
#include "Plane.h"

// Pilot class header from question 6 & 7

class Pilot {
private: 
	std::string name;
public: 
	Pilot(std::string pilotName, Plane* pilotsPlane); // Constructor for old CPP-style pointer
//	Pilot(std::string pilotName, std::shared_ptr<Plane> pilotsPlane); // Constructor for modern CPP-style pointer

	~Pilot(); // Deconstructor
	
	Plane* MyPlane;					// Old C-style pointer to plane object
//	std::shared_ptr<Plane> MyPlane_MODERN;	// Modern CPP-style pointer


	// Functions
	std::string getName();
	Plane* getPlaneMemory();
//	std::shared_ptr<Plane> getPlaneMemory_MODERN(); // Function for modern CPP-style pointer
};

#endif