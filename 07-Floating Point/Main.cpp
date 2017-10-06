#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;

	cout << fixed << fValue << endl;
	cout << scientific << fValue << endl;
	cout << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;

	cout << setprecision(20) << fixed << dValue << endl;
	cout << sizeof(dValue) << endl;

	long double lValue = 123.456789876543210;

	cout << setprecision(20) << fixed << lValue << endl;
	cout << sizeof(lValue) << endl;

	return 0;
}