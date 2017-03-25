#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main ()
{
	const int arraySize=5;
	string spoilers[arraySize]={"Harry dies.", "Voldemort dies.", "Dumbledore dies.", "Snape dies.", "Hermione and Ron get together."};
	
	cout << "This program outputs a random Harry Potter spoiler so be prepared!\n";

	srand(time(NULL));

	int randomNum = rand() % arraySize + 0;
	
	cout << "The spoiler is... ";
	cout << spoilers[randomNum] << endl;

	return 0;
}
