#include <iostream>
using namespace std;

// adding ints together
int main(){
	int a = 1;
	int b = 2;
	cout << "A: " << a << " B: " << b << "\n";
	cout << "A + B: " << a + b << endl;
// Adding these as chars will return 99
	char c = '1';
	char d = '2';
	cout << "C: " << c << " D: " << d << "\n";
	cout << "C + D: " << c + d << endl; 
// Assigning Multiple Variables to one value
	int x, y, z;
	x = y = z = 50;
	z = 100;
	cout << x << y << z << endl;
// Use constants for vars you don't want to change
	int maxScore = 100;
}