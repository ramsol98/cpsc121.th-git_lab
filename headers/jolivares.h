// Name: Jarrel Olivares
// Function: pounds_to_poods

#include <iostream>

void pounds_to_poods()
{
	unsigned int pounds;
	std::cout << "How many pounds? ";
	std::cin >> pounds;
	std::cout << "There are " << pounds/36.1132 << " poods in " << pounds
			  << " pounds.\n";
}
