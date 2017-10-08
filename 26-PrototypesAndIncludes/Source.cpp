#include <iostream>

//void doSomething(); -> Protótipo da função
#include "utils.h"; //Protótipo colocado em um arquivo de header .h

using namespace std;

int main() {

	doSomething();

	return 0;
}

//Implementação da função, note que com o protótipo a função pode ser implementada depois de ser chamada
void doSomething() {
	cout << "Hello" << endl;
}