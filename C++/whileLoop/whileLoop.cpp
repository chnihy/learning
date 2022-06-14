#include <iostream>
using namespace std;


int main(){
	// while loop
	cout << "While" <<endl;
	int i = 0;
	while (i < 5) {
		cout << i << "\n";
		i++;
	}

	// do/while loop
	cout << "Do/While" <<endl;
	int j = 0;
	do {
		cout << j << "\n";
		j++;
	}
	while (j < 5);
}