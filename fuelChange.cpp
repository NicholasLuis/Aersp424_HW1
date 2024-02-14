#include "fuelChange.h"
#include <iostream>
#include <iomanip>

// This function is a derived mathematical expression to find the change in fuel to acheive
//		the desired center of gravity (COG) location
// INPUT: Initial moment and weight of the plane, weight of each gallon of fuel, moment arm of the fuel tank,
//		   desired COG
// OUTPUT: Number of gallons to add/remove

void fuelChange(double initialMoment, double initialWeight, double perGallonWeight, double fuelMomentArm, double newCOG)
{
	double deltaGallons = (initialMoment - (newCOG * initialWeight)) / ((newCOG - fuelMomentArm) * perGallonWeight);

	if (deltaGallons < 0) // This means we need to remove fuel
	{
		std::cout << "\nRemove "
			<< std::fixed << std::setprecision(2) << abs(deltaGallons)
			<< " gallons of fuel to balance the plane's weight" << std::endl;
	}
	else // This means we need to add fuel
	{
		std::cout << "\nAdd "
			<< std::fixed << std::setprecision(2) << deltaGallons
			<< " gallons of fuel to balance the plane's weight" << std::endl;
	}
}