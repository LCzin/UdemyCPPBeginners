#include <iostream>
using namespace std;

int main() {

	bool bValueTrue = true;
	cout << bValueTrue << endl;

	bool bValueFalse = false;
	cout << bValueFalse << endl;

	char cValue1 = 146;
	cout << cValue1 << endl;

	char cValue2 = 'G';
	cout << cValue2 << endl;
	cout << (int)cValue2 << endl;

	cout << "Size of char type: " << sizeof(char) << " byte." << endl;
	cout << CHAR_MAX << endl;
	cout << CHAR_MIN << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << (char)wValue << endl;
	cout << "Size of wchar_t type: " << sizeof(wchar_t) << " byte." << endl;

	return 0;
}