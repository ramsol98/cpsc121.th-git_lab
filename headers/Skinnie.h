#ifndef RANDCOLOR_H
#define RANDCOLOR_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void randColor(){
	int randomColor;

	srand (time(NULL));
	randomColor = rand() % 7 + 1;

	if (randomColor == 1){
		cout << "Red" << endl;
	}
	if (randomColor == 2){
		cout << "Orange" << endl;
	}
	if (randomColor == 3){
		cout << "Yellow" << endl;
	}
	if (randomColor == 4){
		cout << "Green" << endl;
	}
	if (randomColor == 5){
		cout << "Blue" << endl;
	}
	if (randomColor == 6){
		cout << "Indigo" << endl;
	}
	if (randomColor == 7){
		cout << "Violet" << endl;
	}
}

#endif
