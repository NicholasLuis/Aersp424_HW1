#include <cstdint>
#include <iostream>

// Made by Nicholas Luis
// Inputs: weight, number of passengers, moment arms, etc.
// Output: Amount of fuel to add/remove to balance the plane and stay below the max weight

int main()
{
	// Initializing variables
	double totalPlaneWeight = 0, totalPlaneMoment = 0, fuelGallons = 0;
	static uint16_t maxWeight = 2950; // design limit of the plane (lbs)

	// This scope calculates the initial moment due to passengers, cargo, and the aircraft structure
	{
		// Intializing temporary variables
		uint16_t weight, frontOccupantsNumber, rearOccupantsNumber, cargoWeight;
		double frontOccupantsMoment, frontOccupantsMomentArm, frontOccupantsWeight,
			   rearOccupantsMoment, rearOccupantsMomentArm, rearOccupantsWeight;

		// Requests plane's empty weight, passengers, fuel, and cargo 
		std::cout << "Enter the empty weight of the plane (in lbs): ";
		std::cin >> totalPlaneWeight;
		std::cout << "Enter the empty-weight moment of the plane (in lb-in): ";
		std::cin >> totalPlaneMoment;

		std::cout << "Enter the total weight of the cargo(in lbs): ";
		std::cin >> cargoWeight;
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
		frontOccupantsMoment = frontOccupantsNumber * frontOccupantsWeight;

		// Calculates total moment from the rear passengers
		std::cout << "Enter the moment arm of the rear seat (in inches): ";
		std::cin >> rearOccupantsMoment;
		for (int i = 0; i < rearOccupantsNumber; i++)
		{
			std::cout << "Enter the weight of passenger #" << i << " in the rear seat (in lbs): ";
			std::cin >> weight;
			rearOccupantsWeight += weight;
		}
		
		rearOccupantsMoment = rearOccupantsNumber * rearOccupantsWeight;
		totalPlaneWeight += (frontOccupantsWeight + rearOccupantsWeight);
		totalPlaneMoment += (frontOccupantsMoment + rearOccupantsMoment);
	}






}