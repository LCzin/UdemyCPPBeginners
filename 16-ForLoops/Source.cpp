#include <iostream>
#include <limits>
using namespace std;


int main() {
	
	for (unsigned char i = 0; i < UCHAR_MAX; i++)
	{
		cout << "Hello." << (int)i << endl;
	}

	return 0;
}