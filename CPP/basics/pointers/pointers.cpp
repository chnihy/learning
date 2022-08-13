#include <iostream>
using namespace std;

int main(){
	string foo = "Foo"; //master var
	string &fooRef = foo; //reference to foo
	string* fooPoint = &foo; //Pointer to foo, stores hex

	cout << "foo: " << foo << endl;
	cout << "fooRef: " << fooRef << endl;
	cout << "&foo: " << &foo << endl;
	cout << "fooPoint: " << fooPoint << endl;
}