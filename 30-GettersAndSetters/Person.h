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
Controv�rsia em utilizar esse tipo de m�todo
Porque � quase como expor a vari�vel para o usu�rio fora da classe modificar
*/