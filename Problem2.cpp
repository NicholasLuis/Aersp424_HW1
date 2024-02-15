#include <iostream>
#include <array>
#include "fuelChange.h"
#include "fuelChange.cpp"


// Question 2 of Homework 1
// Made by Nicholas Luis

int main()
{
	std::cout << "---------------------------------------------------------------------"
			<< "\n-----------------------BEGINNING OF QUESTION 2-----------------------"
			<< "\n---------------------------------------------------------------------" << std::endl;

	std::array< std::string, 3> flightList = {
		"There are 160-mile flights between \"SCE\" and \"PHL\"",
		"There are 640-mile flights between \"SCE\" and \"ORD\"",
		"There are 220-mile flights between \"SCE\" and \"EWR\"",
	};

	//// Uncomment to test if the container works
	//for (auto& line : flightList) 
	//{
	//	std::cout << line << std::endl;
	//}

	return 0;
}