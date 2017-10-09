#include <iostream>
#include "Dog.h"
using namespace std;

void Dog::bark() {
	if (happy)
	{
		cout << "Au Au!!!" << endl;
	}
	else
	{
		cout << "Ainnnn Ainnnnn" << endl;
	}
}

void Dog::makeHappy() {
	happy = true;
}

void Dog::makeSad() {
	happy = false;
}