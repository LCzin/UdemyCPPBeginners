#include <iostream>

//void doSomething(); -> Prot�tipo da fun��o
#include "utils.h"; //Prot�tipo colocado em um arquivo de header .h

using namespace std;

int main() {

	doSomething();

	return 0;
}

//Implementa��o da fun��o, note que com o prot�tipo a fun��o pode ser implementada depois de ser chamada
void doSomething() {
	cout << "Hello" << endl;
}