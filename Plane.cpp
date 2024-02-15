#include "Plane.h"
#include <iostream>
#include <array>

Plane::Plane(std::string start, std::string end)
	: origin(start), destination(end),
	pos(0.0), vel(0.0), distance(0.0), at_SCE(false) // initializing values
{
	std::cout << "Constructor executed" << std::endl;
	pos = 0;
}

// Basic functions that return or change the object's values
double Plane::getPos() { return pos; }
double Plane::getVel() { return vel;  }
void Plane::setVel(double newVel) { vel = newVel; }
std::string	Plane::getOrigin() { return Plane::origin; }
std::string	Plane::getDestination() { return destination; }
void Plane::Operate(double dt) {}
bool Plane::get_at_SCE() { return at_SCE; }