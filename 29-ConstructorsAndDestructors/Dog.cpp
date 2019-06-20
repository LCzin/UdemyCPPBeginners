#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog() {
	cout << "Dog class created." << endl;
	happy = true;
}

Dog::~Dog() {
	cout << "Dog class destroyed." << endl;
}

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

Cat::Cat()
{
	cout << "Cat class created." << endl;
	happy = false;
}

Cat::~Cat()
{
	cout << "Cat class destroyed." << endl;
}

void Cat::meouw() {
	if (happy)
	{
		cout << "Meouwwww!!!" << endl;
	}
	else
	{
		cout << "Ssssssss!" << endl;
	}
}