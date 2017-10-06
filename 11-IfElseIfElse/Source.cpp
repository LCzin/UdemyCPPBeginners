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

	if (input == 1)
	{
		cout << "Adicionando um novo item..." << endl;
	}
	else if (input == 2)
	{
		cout << "Deletando item..." << endl;
	}
	else if (input == 3)
	{
		cout << "Vendo um item..." << endl;
	}
	else if (input == 4)
	{
		cout << "Procurando um item..." << endl;
	}
	else if (input == 5)
	{
		cout << "Saindo do programa..." << endl;
	}
	else
	{
		cout << "Opcao invalida" << endl;
	}

	return 0;
}