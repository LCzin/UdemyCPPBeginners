#include "Person.h"

Person::Person() {
	name = "Luis";
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}