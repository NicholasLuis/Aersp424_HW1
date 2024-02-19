#include <iostream>
#include "Plane.h"

// Pilot class header from question 6

class Pilot {
private: 
	std::string name;
public: 
	Pilot(std::string pilotName); // Constructor
	~Pilot(); // Deconstructor
	
	Plane* MyPlane; // Pointer to plane object
	

	// Functions
	std::string getName();
};