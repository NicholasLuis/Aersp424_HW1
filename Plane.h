#ifndef PlaneClass_H
#define PlaneClass_H

#include <array>
#include <iostream>

class Plane {
private:
	double pos = 0.0, vel = 0.0, distance = 0.0;
	bool at_SCE = 0;
	std::string origin, destination;
	std::array< std::string, 3> flightList = {
		"There are 160-mile flights between \"SCE\" and \"PHL\"",
		"There are 640-mile flights between \"SCE\" and \"ORD\"",
		"There are 220-mile flights between \"SCE\" and \"EWR\"",
	};
public:
	Plane(std::string start, std::string end); // Constructor that takes in the origin & destination strings}
	~Plane() { std::cout << "Deconstructor executed<" << std::endl; }; // Destructor

};
#endif