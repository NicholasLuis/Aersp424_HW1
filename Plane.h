#ifndef PlaneClass_H
#define PlaneClass_H

#include <array>
#include <iostream>

class Plane {
private:
	double pos, vel, distance;
	bool at_SCE;
	std::string origin, destination;
	std::array< int, 3> airportDistances = { 160, 640, 220 }; // Keeps track of the distances between airports
	std::array< std::string, 3> airportNames = { "PHL", "ORD", "EWR" }; // Keeps track of the destination airports

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