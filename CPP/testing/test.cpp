#include <iostream>
#include <string>
using namespace std;

int main() {
   char str[3];
   cout << "Enter a string\n";
   cin.getline(str,80); //take a string
   cout << "You have entered:\n";
   cout << str << endl;

}