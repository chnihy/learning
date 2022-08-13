# Structures

### Creating a Structure
Similar to Objects in JS, structures contain variables (called Members) of different types
```cpp
struct {
	int size;
	string topping;
	int cost;
} myPizza
```
After creation, name the structure, then assign values to the members using . notation
```cpp
myPizza.size = 14;
myPizza.topping = "Cheese";
myPizza.cost = 22;

cout << "My Pizza is " << myPizza.topping << endl;
```

### Naming Structures
Naming structures allows you to use the struct as a var
```cpp
struct pizza{
	int size;
	string topping;
	int cost;
}

pizza cheesePizza;
myPizza.size = 14;
myPizza.topping = "Cheese";
myPizza.cost = 22;

pizza pepPizza;
myPizza.size = 12;
myPizza.topping = "Pepperoni";
myPizza.cost = 18;

pizza sausagePizza;
myPizza.size = 16;
myPizza.topping = "Sausage";
myPizza.cost = 26;


```

