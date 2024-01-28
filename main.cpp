#include <cstdint>
#include <iostream>

// Made by Nicholas Luis

int main()
{
	// Initializing variables
	double totalPlaneWeight = 0, totalPlaneMoment = 0;
	uint16_t frontOccupants, rearOccupants, maxWeight;
	maxWeight = 2950; // Designed weight limit of the plane (lbs)

	// Requesting user inputs for each of the variables
	{
		uint16_t weight = 0;
		std::cout << "Enter the empty weight of the plane (in lbs): ";
		std::cin >> weight;
		totalPlaneWeight += weight;

	}
}