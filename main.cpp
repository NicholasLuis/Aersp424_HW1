#include <cstdint>
#include <iostream>
#include <iomanip>

// HW1 Problem 1 - Made by Nicholas Luis
// Inputs: weight, number of passengers, moment arms, etc.
// Output: Amount of fuel to add/remove to balance the plane and stay below the max weight
// 
// Note: This program assumes that adding/removing fuel for weight does not significantly
//		 push the plane to be unbalanced (or vice-versa: balancing does not lead it to exceed the weight limit)

 double fuelChange(double initialMoment, double initialWeight, double perGallonWeight, double fuelMomentArm)
{
	return 1.0;
}

int main()
{
	// Initializing variables
	double totalPlaneWeight = 0, totalPlaneMoment = 0, centerOfGravity,
		fuelGallons = 0, perGallonWeight =0, totalFuelWeight = 0, fuelMomentArm = 0;
	static uint16_t maxWeight = 2950; // designed weight limit of the plane (lbs)
	static long frontCoG = 82.1, aftCoG = 84.7; // designed center of gravity lmit of the plane (inches)

	// This scope calculates the initial moment due to passengers, cargo, fuel, and the aircraft structure
	{
		// Intializing temporary variables
		uint16_t weight, frontOccupantsNumber, rearOccupantsNumber, cargoWeight;
		double frontOccupantsMoment, frontOccupantsWeight = 0, momentArm,
			 rearOccupantsMoment, rearOccupantsWeight = 0,
			 cargoMoment, fuelWeight, fuelMoment;

		// Requests plane's empty weight, passengers, fuel, and cargo 
		std::cout << "Enter the empty weight of the plane (lbs): ";
		std::cin >> totalPlaneWeight;
		std::cout << "Enter the empty-weight moment of the plane (lb-in): ";
		std::cin >> totalPlaneMoment;

		// Calculates total moment from the front passengers
		std::cout << "Enter the number of occupants in the front seats: ";
		std::cin >> frontOccupantsNumber;		
		std::cout << "Enter the weights (lbs) of each passenger in the front seat. Separate the numbers with spaces: ";
		for (int i = 0; i < frontOccupantsNumber; i++)
		{
			std::cin >> weight;
			frontOccupantsWeight += weight;
		}
		std::cout << "Enter the moment arm of the front seat (inches): ";
		std::cin >> momentArm;

		frontOccupantsMoment = frontOccupantsWeight * momentArm;

		// Calculates total moment from the rear passengers
		std::cout << "Enter the number of occupants in the rear seats: ";
		std::cin >> rearOccupantsNumber;
		std::cout << "Enter the weights (lbs) of each passenger in the rear seat. Separate the numbers with spaces: ";
		for (int i = 0; i < rearOccupantsNumber; i++)
		{
			std::cin >> weight;
			rearOccupantsWeight += weight;
		}
		std::cout << "Enter the moment arm of the rear seat (inches): ";
		std::cin >> momentArm;
		rearOccupantsMoment = rearOccupantsWeight * momentArm;

		// Calculates total moment from the fuel
		std::cout << "Enter the number of gallons of usable fuel: ";
		std::cin >> fuelGallons;
		std::cout << "Enter the weight of 1 gallon of fuel (lbs): ";
		std::cin >> perGallonWeight;
		std::cout << "Enter the moment arm of the fuel tank (inches): ";
		std::cin >> momentArm;
		fuelWeight = fuelGallons * perGallonWeight;
		fuelMoment = fuelWeight * momentArm;

		// Calculates total moment from the baggage
		std::cout << "Enter the weight of the baggage (lbs): ";
		std::cin >> cargoWeight;
		std::cout << "Enter the moment arm of the cargo (inches): ";
		std::cin >> momentArm;
		cargoMoment = cargoWeight * momentArm;

		// Calculates total weight, total moment, and the center of gravity of the plane
		totalPlaneWeight += (frontOccupantsWeight + rearOccupantsWeight + fuelWeight + cargoWeight);
		totalPlaneMoment += (frontOccupantsMoment + rearOccupantsMoment + fuelMoment + cargoMoment);
		centerOfGravity = totalPlaneMoment / totalPlaneWeight;
	}

	// This scope determines how much fuel to add/remove (if any)
	{
		bool atLimit = false;
		
		if (totalPlaneWeight > maxWeight)
		{
			std::cout << "\nThe plane is over the weight limit. Remove "
				<< std::fixed << std::setprecision(2) << ((maxWeight - totalPlaneWeight) / perGallonWeight)
				<< " gallons of fuel";
			bool atLimit = true; // The plane is now at the weight limit after removing fuel
		}

		if (centerOfGravity < frontCoG) // Checks if CoG too far forward
		{

			// Compares center of gravity to the fuel moment arm to see if we should add or remove fuel
			if (centerOfGravity < fuelMomentArm) // Need to add fuel to balance
			{
				if (atLimit) {
					std::cout << "\nThe plane is at the weight limit and is unbalanced. Consider moving weight"
						" from the front to the rear of the aircraft"; 
				}
				else
				{
					std::cout << "\nRemove " << std::fixed << std::setprecision(2)
							<< 
							<< " gallons of fuel to balance the plane's weight";
				}


			}
			else
			{

			}

		}
		else if (centerOfGravity > aftCoG) // Checks if CoG too far back
		{
			std::cout << "";
		}
		else
		{
			std::cout << "The plane is within the design limits.";
		}
	}

	return 0;
}