#include <iostream>
#include <string>
using namespace std;


int main() {
	
	cout << "Array of integers" << endl;
	cout << "=================" << endl;
	int values[3];

	values[0] = 88;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "=================" << endl;

	double numbers[4] = {243.7,567.87,23.34,14.3};

	for (unsigned char i = 0; i < size(numbers); i++)
	{
		cout << "Elemento de index " << (int) i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "=================" << endl;

	double numberArray[8] = {};

	for (unsigned char i = 0; i < size(numberArray); i++)
	{
		cout << "Elemento de index " << (int)i << ": " << numberArray[i] << endl;
	}

	cout << endl << "Array of strings" << endl;
	cout << "=================" << endl;

	string stringArray[] = {"apple", "orange", "banana"};

	for (unsigned char i = 0; i < size(stringArray); i++)
	{
		cout << "Elemento de index " << (int)i << ": " << stringArray[i] << endl;
	}

	return 0;
}