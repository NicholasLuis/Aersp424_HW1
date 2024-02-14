#include <iostream>
#include <array>

// Question 2 of Homework 1
// Made by Nicholas Luis

int main()
{
	std::array< std::string, 3> stuff = {
		"There are 160-mile flights between \"SCE\" and \"PHL\"",
		"There are 640-mile flights between \"SCE\" and \"ORD\"",
		"There are 220-mile flights between \"SCE\" and \"EWR\"",
	};

	for (auto& line : stuff) 
	{
		std::cout << line << std::endl;
	}

	return 0;
}