//Name: Tuan-Anh Nguyen
//Function: surfaceArea_of_Cube

#include <iostream>

void surfaceArea_of_Cube()
{
  float side, surfaceArea;
  std::cout<<"What is the length of a side?"<<endl;
  std::cin>>side;
  surfaceArea = 6.0*pow(side,2);
  std::cout<<"The surface area of a cube is"<<surfaceArea<<endl;
}
  
