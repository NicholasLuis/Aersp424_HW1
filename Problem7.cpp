#include "Plane.cpp"
#include "Plane.h"

#include "Pilot.cpp"
#include "Pilot.h"

int main() {
	std::cout << "---------------------------------------------------------------------"
			<< "\n-----------------------BEGINNING OF QUESTION 7-----------------------"
			<< "\n---------------------------------------------------------------------" << std::endl;

	// Initializing values

//	Note: Swap which one is commented to switch between Old CPP-style pointer and new CPP-style pointer
	Plane* pln= new Plane("SCE", "ORD");								// Old CPP-style pointer
//	std::unique_ptr<Plane> pln = std::make_shared<Plane>("SCE", "ORD"); //  Uncomment to use Modern CPP-style pointer

	pln->setVel(500);
	Pilot Pilot1("Nicholas", pln);
	Pilot Pilot2("Luis", pln);

	int dt = 20; //timestep
	int maxItr = 2000; // Max # iterations
	std::string inCommand = Pilot1.getName();

	// Operation loop
	for (int i = 0; i < dt * maxItr; i += dt) {
		pln->Operate(dt);
//		std::cout << "Time: " << i << " seconds, Position: " << pln.getPos() << " miles." << std::endl; // For debugging


		if ((inCommand == Pilot1.getName()) && (pln->get_at_SCE()) )
		{
			inCommand = Pilot2.getName(); //Switches whos in command of the plane
			std::cout << "\nThe plane is at SCE\n"
					  << Pilot2.getName() << " is the pilot for this flight. Employee ID is: " << &Pilot2
					  << ".\nThe plane's registration number is: " << Pilot2.getPlaneMemory() << std::endl;
		}
		else if ((inCommand == Pilot2.getName()) && (pln->get_at_SCE()))
		{
			inCommand = Pilot1.getName(); //Switches whos in command of the plane
			std::cout << "\nThe plane is at SCE\n"
					  << Pilot1.getName() << " is the pilot for this flight. Employee ID is: " << &Pilot1
					  << ".\nThe plane's registration number is: " << Pilot1.getPlaneMemory() << std::endl;
		}

	}

	delete pln; // Un-allocates memory
	return 0;
}