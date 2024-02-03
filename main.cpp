#include <cstdint>
#include <iostream>

// Made by Nicholas Luis
// Inputs: weight, number of passengers, moment arms, etc.
// Output: Amount of fuel to add/remove to balance the plane and stay below the max weight

int main()
{
	// Initializing variables
	double totalPlaneWeight = 0, totalPlaneMoment = 0, fuelGallons = 0, centerOfGravity;
	static uint16_t maxWeight = 2950; // designed weight limit of the plane (lbs)
	static long frontCoG = 82.1, aftCoG = 84.7; // designed center of gravity lmit of the plane (inches)

	// This scope calculates the initial moment due to passengers, cargo, fuel, and the aircraft structure
	{
		// Intializing temporary variables
		uint16_t weight, frontOccupantsNumber, rearOccupantsNumber, cargoWeight;
		double frontOccupantsMoment, frontOccupantsMomentArm, frontOccupantsWeight = 0,
			rearOccupantsMoment, rearOccupantsMomentArm, rearOccupantsWeight = 0,
			cargoMomentArm, cargoMoment, fuelWeight, fuelMoment, fuelMomentArm;

		// Requests plane's empty weight, passengers, fuel, and cargo 
		std::cout << "Enter the empty weight of the plane (lbs): ";
		std::cin >> totalPlaneWeight;
		std::cout << "Enter the empty-weight moment of the plane (lb-in): ";
		std::cin >> totalPlaneMoment;

		std::cout << "Enter the total weight of the cargo(lbs): ";
		std::cin >> cargoWeight;
		std::cout << "Enter the number of occupants in the front seats: ";
		std::cin >> frontOccupantsNumber;
		std::cout << "Enter the number of occupants in the rear seats: ";
		std::cin >> rearOccupantsNumber;
		
		// Calculates total moment from the front passengers
		std::cout << "Enter the moment arm of the front seat (inches): ";
		std::cin >> frontOccupantsMoment;
		std::cout << "Enter the weights (lbs) of the passengers in the front seat. Separate the numbers with spaces: ";
		for (int i = 0; i < rearOccupantsNumber; i++)
		{
			std::cin >> weight;
			frontOccupantsWeight += weight;
		}
		frontOccupantsMoment = frontOccupantsNumber * frontOccupantsWeight;

		// Calculates total moment from the rear passengers
		std::cout << "Enter the moment arm of the rear seat (inches): ";
		std::cin >> rearOccupantsMoment;
		std::cout << "Enter the weights (lbs) of the passengers in the rear seat. Separate the numbers with spaces: ";
		for (int i = 0; i < rearOccupantsNumber; i++)
		{
			std::cin >> weight;
			rearOccupantsWeight += weight;
		}
		rearOccupantsMoment = rearOccupantsNumber * rearOccupantsWeight;

		// Calculates total moment from the fuel
		std::cout << "Enter the number of gallons of usable fuel: ";
		std::cin >> fuelGallons;
		std::cout << "Enter the weight of 1 gallon of fuel (lbs): ";
		std::cin >> cargoMomentArm;
		std::cout << "Enter the moment arm of the fuel tank (inches): ";
		std::cin >> cargoWeight;

		// Calculates total moment from the baggage
		std::cout << "Enter the moment arm of the cargo (inches): ";
		std::cin >> cargoMomentArm;
		std::cout << "Enter the weight of the cargo (lbs): ";
		std::cin >> cargoWeight;


		totalPlaneWeight += (frontOccupantsWeight + rearOccupantsWeight);
		totalPlaneMoment += (frontOccupantsMoment + rearOccupantsMoment);
		centerOfGravity = totalPlaneMoment / totalPlaneWeight;
	}



}