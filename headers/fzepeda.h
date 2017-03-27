// Name: Francisco Zepeda
// Calculate the area of the circle

#include <cmath>
#include <iostream>
#define _USE_MATH_DEFINES

void circleArea() {
  int radius;
  std::cout << "what is the radius of the circle? ";
  std::cin >> radius;
  std::cout << "The Area is " << M_Pi * (radius) ^ 2 << endl;
}
