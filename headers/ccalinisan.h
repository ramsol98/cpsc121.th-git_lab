//Name: Catherine Calinisan
//Function: calculate the area of a rectangle

#include <iostream>

void calcRectangleArea()
{
	int length, width;

	std::cout << "What is the length of your rectangle? ";
	std::cin >> length;
	std::cout << "What is the width of your rectangle? ";
	std::cin >> width;
	
	std::cout << "Area: " << length * width << "\n";

}
