#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "1. Adicione um novo item." << endl;
	cout << "2. Delete um item." << endl;
	cout << "3. Veja um item." << endl;
	cout << "4. Procure um item." << endl;
	cout << "5. Sair." << endl;

	cout << "Selecione > " << flush;

	int input;
	cin >> input;

	if (input < 3)
	{
		cout << "Privilegios insuficientes..." << endl;
	}
	else
	{
		cout << "Privilegios suficientes!" << endl;
	}

	if (input == 5)
	{
		cout << "Fechando programa...";
	}


	return 0;
}