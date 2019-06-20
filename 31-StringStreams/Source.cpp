#include <iostream>
#include <string>
#include <sstream> // Header para String Stream

using namespace std;

int main() {

	string name = "Bob";
	int age = 32;

	// string info = "Name: " + name + "; Age: " + age;
	// Desej�vel concatenar valores int em strings, a linha acima n�o aponta erros mas falha ao compilar
	// O erro � que "+" n�o pode ser usado pra concatenar strings com ints

	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	// cout << ss.str() << endl;

	string info = ss.str();

	cout << info << endl;

	return 0;
}