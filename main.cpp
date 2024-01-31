#include <cstdint>
#include <iostream>

// Made by Nicholas Luis
// Inputs: weight, number of passengers, moment arms, etc.
// Output: Amount of fuel to add/remove to balance the plane and stay below the max weight

int main()
{
	// Initializing variables
	double totalPlaneWeight = 0, totalPlaneMoment = 0, fuelGallons = 0,
		   frontOccupantsMoment, frontOccupantsMomentArm, frontOccupantsWeight,
		   rearOccupantsMoment, rearOccupantsMomentArm, rearOccupantsWeight;
	uint16_t maxWeight = 2950, // design limit of the plane (lbs)
			 weight, frontOccupantsNumber, rearOccupantsNumber;

	// Requests plane's empty weight, number of passengers, and the 
	std::cout << "Enter the empty weight of the plane (in lbs): ";
	std::cin >> weight;
	std::cout << "Enter the number of occupants in the front seats: ";
	std::cin >> frontOccupantsNumber;
	std::cout << "Enter the number of occupants in the rear seats: ";
	std::cin >> rearOccupantsNumber;
		
	// Calculates total moment from the front passengers
	std::cout << "Enter the moment arm of the front seat (in inches): ";
	std::cin >> frontOccupantsMoment;
	for (int i = 0; i < frontOccupantsNumber; i++)
	{
		std::cout << "Enter the weight of passenger #" << i << " in the front seat (in lbs): ";
		std::cin >> weight;
		frontOccupantsWeight += weight;
	}

	// Calculates total moment from the rear passengers
	std::cout << "Enter the moment arm of the rear seat (in inches): ";
	std::cin >> frontOccupantsMoment;
	for (int i = 0; i < frontOccupantsNumber; i++)
	{
		std::cout << "Enter the weight of passenger #" << i << " in the front seat (in lbs): ";
		std::cin >> weight;
		frontOccupantsWeight += weight;
	}

	frontOccupantsMoment = frontOccupantsNumber * frontOccupantsWeight;

	totalPlaneWeight += weight;
	totalPlaneMoment += (frontOccupantsMoment + rearOccupantsMoment);



}