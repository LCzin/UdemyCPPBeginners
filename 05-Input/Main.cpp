#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Escreva seu nome: " << flush;
	string input;
	cin >> input;

	cout << "Você escreveu: " << input << endl;

	cout << "Escreva um numero: " << flush;
	int value;
	cin >> value;

	cout << "Você escreveu: " << value << endl;
	return 0;
}