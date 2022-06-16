#include <iostream>
using namespace std;

// Create a function
void myFunction() {
  cout << "Hello from myFunction()!" << endl;
}

// Function Overloading examples
string myOverloadedFunc(string name){
	return "Hello: " + name;
}
int myOverloadedFunc(int num){
	return num + 1;
}


// Function Calls
int main() {
	
	myFunction();  
	cout << myOverloadedFunc("Bob") << endl; 
	cout << myOverloadedFunc(1) << endl;
	
	return 0;
}