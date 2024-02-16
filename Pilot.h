#include <iostream>

// Pilot class header from question 6

class Pilot {
private: 
	std::string name;
public: 
	Pilot(std::string pilotName); // Constructor
	~Pilot(); // Deconstructor

	// Functions
	std::string getName();
};