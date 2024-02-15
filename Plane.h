#ifndef PlaneClass_H
#define PlaneClass_H

#include <array>
#include <iostream>

class Plane {
private:
	double pos, vel, distance;
	bool at_SCE;
	std::string origin, destination;
	std::array< std::string, 3> flightList = {
		"There are 160-mile flights between \"SCE\" and \"PHL\"",
		"There are 640-mile flights between \"SCE\" and \"ORD\"",
		"There are 220-mile flights between \"SCE\" and \"EWR\"",
	};
public:
	Plane(std::string start, std::string end); // Constructor that takes in the origin & destination strings}
	~Plane() { std::cout << "Deconstructor executed<" << std::endl; }; // Destructor

	// Initializing functions
	double getPos();
	double getVel();
	void setVel(double newVel);
	std::string	getOrigin();
	std::string	getDestination();
	void	Operate(double dt);
	bool	get_at_SCE();

};
#endif