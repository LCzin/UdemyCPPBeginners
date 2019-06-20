#include <iostream>
#include <string>
#include <sstream> // Header para String Stream

using namespace std;

int main() {

	string name = "Bob";
	int age = 32;

	// string info = "Name: " + name + "; Age: " + age;
	// Desejável concatenar valores int em strings, a linha acima não aponta erros mas falha ao compilar
	// O erro é que "+" não pode ser usado pra concatenar strings com ints

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