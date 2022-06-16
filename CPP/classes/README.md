# Classes

## Simple Class Example
A simple class
```cpp
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```


## Access specifiers
From <a href="https://www.w3schools.com/cpp/cpp_access_specifiers.asp">W3Schools</a>

In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class - see <a href="https://www.w3schools.com/cpp/cpp_encapsulation.asp">Encapsulation</a>
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.



## Inheritance and Polymorphism
Sub classing
```cpp
class BaseClass{
	public:
		void message(){
			cout << "hello from base class!" >> endl;
		}
}
class SubClass : public BaseClass{
	public:
		void message(){
			cout << "hello from sub class!" >> endl;
		}
}
```


A more advanced class with methods and a constructor
```cpp
class Pizza {        // Class name
  public:          // Access specifier
    string topping;  // Attribute
    string crust;  // Attribute
    int cost;      // Attribute
    Pizza(string toppingInput, string crustInput, int costInput) { // Constructor with parameters
      string topping = toppingInput;
      string crust = crustInput;
      int cost = costInput;
    }
	string printOrder(){
		cout << topping << " " << crust << " " << cost << endl;
	}
};

int main() {
  // Create Car objects and call the constructor with different values
  Pizza pizzaOrder1("peperoni", "thin", 20);
  Pizza pizzaOrder2("cheese", "hand tossed", 18);

  // Print values
	pizzaOrder1.printOrder()
	pizzaOrder2.printOrder()
  return 0;
}
```

## Creating a class object
```cpp
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main(){
	myObject = MyClass();
	
	// assign values to attributes, using . syntax
	myObject.myNum = 2;
	myObject.myString = "Hello World";

	// print attributes
	cout << "myObject.myNum: " << myObject.myNum >> endl;
	cout << "myObject.myString: " << myObject.myString >> endl;
}
```
