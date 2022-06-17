#include <iostream>
using namespace std;
class Pizza {        
	public:          
		string topping;  
		string crust;  
		int cost;      
		
		Pizza(string toppingInput, string crustInput, int costInput) { 
			topping = toppingInput;
			crust = crustInput;
			cost = costInput;
		}
		 
		void printOrder(){
			cout << topping << " " << crust << endl;
		}
};

int main() {
  Pizza pizzaOrder1("peperoni", "thin", 20);
  Pizza pizzaOrder2("cheese", "hand tossed", 18);

	pizzaOrder1.printOrder();
	pizzaOrder2.printOrder();
  return 0;
}