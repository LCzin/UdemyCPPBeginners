#include <iostream>
using namespace std;

/*
== teste de igualdade
!= não igual
< menor que
> maior que
<= menor ou igual que
>= maior ou igual que
&& AND
|| OR
*/

int main() {

	int value1 = 7;
	int value2 = 4;

	if (value1 < 8)
	{
		cout << "Condicao 1: verdadeira" << endl;
	}
	else
	{
		cout << "Condicao 1: falsa" << endl;
	}

	if (value1 == 7 && value2 == 4)
	{
		cout << "Condicao 2: verdadeira" << endl;
	}
	else
	{
		cout << "Condicao 2: falsa" << endl;
	}

	if (value1 == 7 || value2 < 4)
	{
		cout << "Condicao 3: verdadeira" << endl;
	}
	else
	{
		cout << "Condicao 3: falsa" << endl;
	}

	if ((value1 != 8 && value2 == 4) || value1 < 10)
	{
		cout << "Condicao 4: verdadeira" << endl;
	}
	else
	{
		cout << "Condicao 4: falsa" << endl;
	}

	bool condition1 = value1 != 8 && value2 == 4;
	//cout << condition1 << endl;

	bool condition2 = value1 < 10;
	//cout << condition1 << endl;

	if (condition1 || condition2)
	{
		cout << "Condicao 5: verdadeira" << endl;
	}
	else
	{
		cout << "Condicao 5: falsa" << endl;
	}

	return 0;
}