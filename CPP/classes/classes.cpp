#include <iostream>
using namespace std;
// Create class
class Pizza {        
  	// Specify Access level
	public:          
		// Create attributes
		string topping;  
		string crust;  
		int cost;      
		
		// Create Constructor, which assigns param vals to attributes
		Pizza(string toppingInput, string crustInput, int costInput) { 
			topping = toppingInput;
			crust = crustInput;
			cost = costInput;
		}
		
		// Create methods 
		void printOrder(){
			cout << topping << " " << crust << endl;
		}
};

int main() {
  // Create Car objects and call the constructor with different values
  Pizza pizzaOrder1("peperoni", "thin", 20);
  Pizza pizzaOrder2("cheese", "hand tossed", 18);

  // Print values
	pizzaOrder1.printOrder();
	pizzaOrder2.printOrder();
  return 0;
}