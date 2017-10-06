#include <iostream>
#include <string>
using namespace std;

int main() {

	string password = "hello";

	cout << "Escreva sua senha > " << flush;
	
	string input;
	cin >> input;

	//cout << "'" << input << "'" << endl;

	if (input == password) {
		cout << "Senha aceita." << endl;
	}
	else {
		cout << "Acesso negado." << endl;
	}

	/*if (input != password) {
		cout << "Acesso negado." << endl;
	}*/

	return 0;
}