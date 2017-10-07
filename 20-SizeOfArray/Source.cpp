#include <iostream>
using namespace std;

int main() {

	/*
	int value = 34;

	cout << sizeof(value) << endl;
	*/

	int values[] = { 4, 7, 3, 4 };
	
	/*
	for (size_t i = 0; i < 4; i++)
	{
		cout << values[i] << " " << flush;
	}
	*/
	cout << endl;

	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	for (unsigned int i = 0; i < sizeof(values)/sizeof(int); i++)
	{
		cout << values[i] << " " << flush;
	}

	return 0;
}