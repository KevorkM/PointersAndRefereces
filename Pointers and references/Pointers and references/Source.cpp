#include <iostream>

using namespace std;


int main() {

	cout << "Pointers and references\n" << endl;

	int x = 5;

	int& intRef = x;

	intRef = 10;

	cout << "x is: " << x << endl;

	return 0;
}