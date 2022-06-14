#include <iostream>
using namespace std;

int main(){
	int singleArray[4] = {1,2,3,4};
	int doubleArray[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int tripleArray[3][2][4] = {
		{
			{1,2,3,4},
			{5,6,7,8}
		},
		{
			{1,2,3,4},
			{5,6,7,8}
		},
		{
			{1,2,3,4},
			{5,6,7,8}
		},
	};

	int firstElemSingle = singleArray[0];
	int firstElemDouble = doubleArray[0][0];
	int firstElemTriple = tripleArray[0][0][0];

	cout << "firstElemSingle: " << firstElemSingle  << endl;
	cout << "firstElemDouble: " << firstElemDouble << endl;
	cout << "firstElemTriple: " << firstElemTriple << endl;


	// For loops
	string letters[2][4] = {
		{ "A", "B", "C", "D" },
		{ "E", "F", "G", "H" }
		};

	for (int i = 0; i<=2; i++) {
		for (int j=0; j<=4; j++)
			cout << letters[i][j] << endl;
		}
}