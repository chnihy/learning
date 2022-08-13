# Files

You can read and write to files using <ifstream> and <ofstream>, respectively.

Or you can handle both requests using <fstream>

```cpp
#include <fstream>
```

## Reading files with <ifstream>
```cpp
#include <iostream>
#include <string>
#include <fstream> // fstream includes file reading (ifstream) and writing (ofstream)
using namespace std;

int main() {
	// Open an existing file with ifstream
	// Note 'read' is a variable
	ifstream read("test.txt");

	// Create empty variables to put file data 
	string text1;
	string text2;

	// Read the file with getline()
	// get the first line of text (from read var) and assign to var 'text1'
	getline(read, text1);
	// get the second line of text (from read var) and assign to var 'text2'
	getline(read, text2);
	
	// close file
	read.close()

}
```

## Writing/Creating Files with <ofstream>
```cpp
#include <iostream>
#include <string>
#include <fstream> // fstream includes file reading (ifstream) and writing (ofstream)
using namespace std;

int main() {
	// Open an existing file with ifstream
	// Note 'read' is a variable
	ifstream read("test.txt");

	// Create empty variables to put file data 
	string text1;
	string text2;

	// Read the file with getline()
	// get the first line of text (from read var) and assign to var 'text1'
	getline(read, text1);
	// get the second line of text (from read var) and assign to var 'text2'
	getline(read, text2);
	
	// close file
	read.close()

}
```