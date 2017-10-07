#include <iostream>
#include <string>
using namespace std;

int main() {

	string animals[3][6] = {
		{"fox", "dog", "cat", "bat", "bear", "sheep"},
		{"mouse", "squirrel", "parrot", "duck", "frog", "hamster"},
		{"elephant", "monkey", "bee", "dophin", "deer", "lion"}
	};

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 6; j++)
		{
			cout << "Animal of index [" << i << "] [" << j << "]: " << animals[i][j] << endl;
		}

		cout << endl;
	}

	return 0;
}