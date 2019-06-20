#pragma once

#include <iostream>
using namespace std;

class Person {
public:
	Person(); //Constructor
	void setName(string newName); //Setter method
	string getName(); //Getter method
private:
	string name;
	int age;
};

/*
Controvérsia em utilizar esse tipo de método
Porque é quase como expor a variável para o usuário fora da classe modificar
*/