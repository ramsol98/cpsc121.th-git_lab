// Name: Brian Frick
// Function: Print an example

#include <iostream>

void examples_to_kiloxamples()
{
	unsigned int count;
	std::cout << "How many examples? ";
	std::cin >> count;
	std::cout << "There are " << count / 1000. << " kiloxamples in " << count
			  << " examples.\n";
}
