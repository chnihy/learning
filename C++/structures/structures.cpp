#include <iostream>
using namespace std;

int main() {
	struct pizza {
		int size;
		string topping;
		int cost;
	};

	pizza order1;
	pizza order2;
	pizza order3;

	order1.size = 14;
	order1.topping = "cheese";
	order1.cost = 20;
	
	order2.size = 16;
	order2.topping = "peperoni";
	order2.cost = 25;
	
	order3.size = 12;
	order3.topping = "sausage";
	order3.cost = 16;

	cout << "Order 1: " << order1.topping << endl;
	cout << "Order 2: " << order2.topping << endl;
	cout << "Order 3: " << order3.topping << endl;
}