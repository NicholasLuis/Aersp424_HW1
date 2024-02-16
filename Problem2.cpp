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

	//This array keeps track of the distances between airports
	std::array< int, 3> airportDistances = { 160, 640, 220 };

	//This array keeps track of the destination airports
	std::array< std::string, 3> airportNames = { "PHL", "ORD", "EWR" };

	//// Uncomment to test if the containers works
	//for (int i = 0; i < size(airportDistances); i++)
	//{
	//	std::cout << "There are " << airportDistances[i] << "-mile flights between \"SCE\" and \"" << airportNames[i] << "\"" << std::endl;
	//}

	return 0;
}