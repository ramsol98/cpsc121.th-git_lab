// Name: Corbin Provost
// Function: weeks_to_beard_inches

#include <iostream>

void weeks_to_beard_inches()
{
	unsigned int weeks;
	std::cout << "How many weeks? ";
	std::cin >> weeks;
    std::cout << "There are " << (weeks * 7)/29.4 << " beard inches in" << weeks
			  << " weeks.\n";
}
