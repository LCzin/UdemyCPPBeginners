#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "Escreva seu nome: " << flush;
	string input;
	cin >> input;

	cout << "Voc� escreveu: " << input << endl;

	cout << "Escreva um numero: " << flush;
	int value;
	cin >> value;

	cout << "Voc� escreveu: " << value << endl;
	return 0;
}