#include "Plane.cpp"
#include "Plane.h"

int main()
{
	std::cout << "---------------------------------------------------------------------"
			<< "\n-----------------------BEGINNING OF QUESTION 5-----------------------"
			<< "\n---------------------------------------------------------------------" << std::endl;

	// Initializing values
	Plane pln("SCE", "ORD");
	pln.setVel(500);
	int dt = 100; //timestep
	int maxItr = 1000; // Max # iterations

	// Operation loop
	for (int i = 0; i < dt*maxItr; i+=dt) {
		pln.Operate(dt);
		std::cout << "Time: " << i << " seconds, Position: " << pln.getPos() << " miles." << std::endl;
	}

	return 0;
}