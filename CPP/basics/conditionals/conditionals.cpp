#include <iostream>
using namespace std;

int main() {
	char a = 'A';
	char b = 'B';

	// multi-line 
	if (a == b) {
		cout << "condition is true" << endl;
	} else {
		cout << "condition is false" << endl;
	}

	// single-line aka ternary
	string result = (a != b) ? "condition is true" : "condition is false";
	cout << result << endl;
}
