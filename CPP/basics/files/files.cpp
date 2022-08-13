#include <iostream>
#include <string>
#include <fstream> // fstream includes file reading (ifstream) and writing (ofstream)
using namespace std;

int main() {
	// Create/Write
	ofstream FileVar("filename.txt");
	FileVar << "File data goes here";
	FileVar.close();

	// Open/Read
	ifstream read("test.txt");
	string text1;
	string text2;
	getline(read, text1);
	getline(read, text2);
	read.close()

}