/*Loc Nguyen
simple header file for petameter convertion to AU*/
#ifndef LNguyen_H_
#define LNguyen_H_
double const petaMeterToAUConst = 6684.5871222684;// according to NASA.gov

void petameterToAU();
void petameterToAU()
{
	double petameterUnit,petameterToAUConvert;
	std::cout << "This program will converts petameter to Astronomical Units(AU)\n";
	std::cout << "Enter the number of petameter you wants to convert to AU:";
	std::cin >> petameterUnit;
	petameterToAUConvert = petameterUnit *petaMeterToAUConst;
	std::cout << petameterUnit << " units of petameter = " << petameterToAUConvert << " AU. \n";

}
#endif /* LNguyen_H_ */