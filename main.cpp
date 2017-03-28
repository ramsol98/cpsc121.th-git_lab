#include "headers/bfrick.h"
#include "headers/ccalinisan.h"
#include "headers/jolivares.h"
#include "headers/cprovost.h"
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
	\n13) \
	\n14) Converts weeks to beard inches\
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
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12: // CCalinisan
			calcRectangleArea();
			break;
		case 13: break;
		case 14: // CProvost
            weeks_to_beard_inches();
            break;
		case 15: break;
		case 16:  //JOlivares
			pounds_to_poods();
			break;
		case 17: break;
		case 18: break;
	}

	return 0;
}
