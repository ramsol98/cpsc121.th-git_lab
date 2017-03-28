#include "headers/bfrick.h"
#include "headers/ccalinisan.h"
#include "headers/LNguyen.h"
#include <iostream>

using namespace std;

int main()
{
	short unsigned int choice;
	cout << "0) Convert examples to kilo-examples.\
	\n1) \
	\n2) \
	\n3) \
	\n4) \
	\n5) \
	\n6) \
	\n7) \
	\n8) \
	\n9) \
	\n10) \
	\n11) \
	\n12) Calculate the area of a rectangle. \
	\n13) Covert petameter to AU.\
	\n14) \
	\n15) \
	\n16) \
	\n17) \
	\n18) \
	\n";
	cout << "Please pick an option: ";
	cin >> choice;

	switch(choice) {
		case 0:  // BFrick
			examples_to_kiloxamples();
			break;
		case 1:  // LMendoza
			break;
		case 2:  // CNavarro
			break;
		case 3:  // YLi
			break;
		case 4:  // ALee
			break;
		case 5:  // GSrinivasan
			break;
		case 6:  // AAbuelhassan
			break;
		case 7:  // LSchauer
			break;
		case 8:  // KGriffin
			break;
		case 9:  // ISaghatchi
			break;
		case 10:  // THasani
			break;
		case 11:  // LPham
			break;
		case 12: // CCalinisan
			calcRectangleArea();
			break;
		case 13://LNguyen
			petameterToAU();
			break;
		case 14: break;
		case 15: break;
		case 16: break;
		case 17: break;
		case 18: break;
	}

	return 0;
}
