# Functions
### Function Format:
```cpp
dataType funcName(optionalDefaultParam=param, datatype optionalParamName,){
	// code block
}
```

### Defining and Calling a func
```cpp
// Defining a function, must be BEFORE main() function
void myFunc(){
	cout << "Hello from myFunction!" << endl;
}

// Calling a function
int main(){
	myFunc(); // outputs "Hello from myFunction!"
}
```
#### Remember: Functions must be defined BEFORE the main() func


## Overloading Functions:
Multiple functions can share the same name if they take different data types

Here we have two functions both named myFunc, but they take different data types
```cpp
string myFunc(string name){
	return "Hello: " + name;
}

string myFunc(int num){
	int sum = num + 1;
	return "1 + " << (string)num << "= " << (string)sum << endl;
}


int main(){
	cout << myFunc("Bob") << endl; // outputs "Hello Bob"
	cout << myFunc(1) << endl; // outputs 2
}
```