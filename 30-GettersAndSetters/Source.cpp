#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main() {

	Person luis;
	luis.setName("Arthur");


	cout << luis.toString() << endl;
	cout << luis.getName() << endl;
	return 0;
}