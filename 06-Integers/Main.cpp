#include <iostream>
#include <limits>
using namespace std;

int main() {

	cout << "Max integer value is: " << INT_MAX << endl;
	cout << "Min integer value is: " << INT_MIN << endl;

	cout << "Max unsigned int value is: " << UINT_MAX << endl;

	cout << "Max long integer value is: " << LONG_MAX << endl;
	cout << "Min long integer value is: " << LONG_MIN << endl;

	cout << "Max short integer value is: " << SHRT_MAX << endl;
	cout << "Min short integer value is: " << SHRT_MIN << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	return 0;
}