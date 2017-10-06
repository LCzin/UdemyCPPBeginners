#include <iostream>
#include <string>
using namespace std;


int main() {
	/* break ....
	for (size_t i = 0; i < 45654; i++)
	{
	cout << "i is: " << i << endl;

	if (i == 10) { break; }

	cout << "Looping..." << endl;
	}

	cout << "Program quitting..." << endl;
	return 0;
	*/

	/* continue ....
	for (size_t i = 0; i < 20; i++)
	{
	cout << "i is: " << i << endl;

	if (i == 10) { continue; }

	cout << "Looping..." << endl;
	}
	*/

	const string password = "hello"; // const para tornar constante, não pode ser mudado no codigo depois
	string input;

	do
	{
		cout << "Enter your password > " << flush;

		cin >> input;

		if (input == password)
		{
			cout << "Password accepted." << endl;
			break;
		}
		else
		{
			cout << "Acess denied" << endl;
		}
	} while (true);

	cout << "Program quitting..." << endl;
	return 0;
}