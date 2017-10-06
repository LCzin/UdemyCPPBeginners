#include <iostream>
#include <string>
using namespace std;


int main() {

	const string password = "hello"; // const para tornar constante, não pode ser mudado no codigo depois
	string input;

	do
	{	
		cout << "Enter your password > " << flush;

		cin >> input;

		if (input == password)
		{
			cout << "Password accepted." << endl;
		}
		else
		{
			cout << "Acess denied" << endl;
		}
	} while (input != password);

	return 0;
}