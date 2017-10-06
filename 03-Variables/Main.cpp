#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 19;
	int numberAnimals = numberCats + numberDogs;

	cout << "O numero de gatos eh: " << numberCats << endl;
	cout << "E o numero de cachorroe eh: " << numberDogs << endl;

	cout << "Total numero de animais eh: " << numberAnimals << endl;
	
	cout << "Novo cachorro adquirido!" << endl;

	++numberDogs;

	cout << "Numero de cachorros atual: " << numberDogs << endl;
	
	return 0;
}