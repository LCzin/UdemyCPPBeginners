#include <iostream>
#include <string>
using namespace std;

int main() {

	string animals[3][6] = {
		{ "fox", "dog", "cat", "bat", "bear", "sheep" },
		{ "mouse", "squirrel", "parrot", "duck", "frog", "hamster" },
		{ "elephant", "monkey", "bee", "dophin", "deer", "lion" }
	};

	cout << sizeof(string) << endl; // Tamanho em bytes de uma string
	cout << sizeof(animals) << endl; // Tamanho em bytes do Array inteiro
	cout << sizeof(animals[0]) << endl; // Tamanho em bytes da primeira dimensão do Array (3)

	for (unsigned int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) // Tamanho em bytes do Array divido pelo tamanho da primeira dimensão resulta no número de itens na primeira dimensão (3)
	{
		for (unsigned int j = 0; j < sizeof(animals[0])/sizeof(string); j++) // Tamanho em bytes da primeira dimensão dividido pelo tamanho de uma string resulta no número de elementos na segunda dimensão (6)
		{
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}