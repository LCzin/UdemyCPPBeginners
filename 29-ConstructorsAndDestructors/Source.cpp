#include <iostream>
#include "Dog.h"
using namespace std;

int main() {
	
	cout << "Starting program..." << endl;

	Dog vick;
	vick.bark();

	Cat snow;
	snow.meouw();

	cout << "Ending program..." << endl;

	return 0;
}