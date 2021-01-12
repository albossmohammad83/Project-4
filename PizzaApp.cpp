/*
Mohammad Abdelrahman
CIS 278
Project 4
Pizza Application for a pizza resturant
*/

#include <iostream>
using namespace std;

class Pizza {
private:
	char crustType;          // store the crust type of the pizza
	char size;				// dtore the size of the pizza  
	int pepperoni;			// the quantity of pepperoni 
	int onionPepper;		// the quantity of onion pepper
	bool cheese;			// wheather the pizza has cheese or not
	int totalToppings();	// total number of toppings pepperoni and onion pepper
public:
					// Constructors
	Pizza();				 
	Pizza(char ctype);			
	Pizza(char ctype, char size);   
	Pizza(bool cheeeOpt, char size = 'M');
				   // Modifying pizza
	void setCrust(char ctype);
	void setSize(char size);
	void setCheese();
	void setPepperoni(int quantity);
	void setOP(int quantity);
				  // Accessor functions
	char getCrust();
	char getSize();
				 // Reset all toppings to default
	void resetToppings();
				// Set cheese to false 
	void noCh();
				// Calculate the price of the pizza
	double calcCost();
				// Printing out the pizza toppings 
	void printToppings(ostream& out);
				// Printing out the pizza information 
	void printPizzaStats(ostream& out);
};

int main(){
				// The crust type the user enters  
	char crustType;
				// the size the user enters, (Y/N) for changes in toppings
	char size, YN;
				// quantity of pepperoni the user enters
	int pepperoni;
				// quantity of onion pepper the user enters
	int onionPepper;
				// if the user want to exit 
	int exit;
				// user enters cheese or not 
	bool cheese;
				
	do         
	{			// ask the user for the crust type and pizza size
		cout << "Enter Crust Type\nNote: crust types: P: Pan crust D: Deep crust H: Hand tossed" << endl;
		cin >> crustType; 
		cout << "Enter Size\nNote: Sizes: S: Small M: Medium L: Large" << endl;
		cin >> size;
				// creat a pizza with the crust and size the user enters
		Pizza pizza(crustType, size);
				// ask the user for the quantity of toppings of pepperoni, onion pepper and cheese
		cout << "How much pepperoni would you like?\n";
		cin >> pepperoni;
		cout << "How much onion peppers would you like?\n";
		cin >> onionPepper;
		cout << "Would you like cheese 1: yes 0: No\n";
		cin >> cheese;
				// set the toppings for the pizza  
		pizza.setPepperoni(pepperoni);
		pizza.setOP(onionPepper);
		if (cheese == 1)
			pizza.setCheese();
		else
			pizza.noCh();
				// printing out the toppings
		cout << "Toppings" << endl;
		pizza.printToppings(cout);
				// ask the user if he/she want to make changes on toppings
		cout << "Would you like to change the toppings? (Y/N)" << endl;
		cin >> YN;
				// if user want to change the toppings
		if (YN == 'Y')
		{
			cout << "How much pepperoni would you like?\n";
			cin >> pepperoni;
			cout << "How much onion peppers would you like?\n";
			cin >> onionPepper;
			cout << "Would you like cheese 1: yes 0: No\n";
			cin >> cheese;
			pizza.setPepperoni(pepperoni);
			pizza.setOP(onionPepper);
			if (cheese == 1)
				pizza.setCheese();
			else
				pizza.noCh();
		}
				// printing the pizza toppings and information 
		cout << "Pizza information" << endl;
		pizza.printToppings(cout);
		pizza.printPizzaStats(cout);
				// printing the total cost of the pizza
		cout << "Total price: " << pizza.calcCost() << "$" << endl;

		cout << "Enter any number to continue, or -1 to exit" << endl;
		cin >> exit;
	} while (exit != -1);
	
	return 0;
}

Pizza::Pizza(){					// Constructor set the pizza to defalut 
	crustType = 'P';
	size = 'M';
	pepperoni = 0;
	onionPepper = 0;
	cheese = true;
}
Pizza::Pizza(char ctype){		//  constructor, places crust type 
	crustType = ctype;
	size = 'M';
	pepperoni = 0;
	onionPepper = 0;
	cheese = true;
}
Pizza::Pizza(char ctype, char sze){		// constructor, places crust type and size 
	crustType = ctype;
	size = sze;
	pepperoni = 0;
	onionPepper = 0;
	cheese = true;
}
Pizza::Pizza(bool cheeeOpt, char sze){		// constructor, places cheese option and size
	crustType = 'P';
	size = sze;
	pepperoni = 0;
	onionPepper = 0;
	cheese = cheeeOpt;
}
void Pizza::setCrust(char ctype){			// set the crust type 
	crustType = ctype;
}
void Pizza::setSize(char sze){				// set the size of the pizza
	size = sze;
}
void Pizza::setCheese(){					// set cheese to true 
	cheese = true;
}
void Pizza::setPepperoni(int quantity){		// set the quantity of pepperoni 
	pepperoni = quantity;
}
void Pizza::setOP(int quantity){			// set the quantity of onion pepper 
	onionPepper = quantity;
}
char Pizza::getCrust(){						// return crust type
	return crustType;
}
char Pizza::getSize(){						// return pizza size
	return size;
}
void Pizza::resetToppings(){				// reset all toppings to their default values
	pepperoni = 0;
	onionPepper = 0;
	cheese = true;
}
void Pizza::noCh(){							// set cheese to false
	cheese = false;
}
int Pizza::totalToppings(){					// return the number of toppings pepperoni + onion pepper
	return pepperoni + onionPepper;
}
double Pizza::calcCost(){					// calculate the cost of the pizza
	if (crustType == 'P' && size == 'S')
		return 5 + (totalToppings() * 2);
	if (crustType == 'P' && size == 'M')
		return 8 + (totalToppings() * 2);
	if (crustType == 'P' && size == 'L')
		return 10 + (totalToppings() * 2);
	if (crustType == 'D' && size == 'S')
		return 6 + (totalToppings() * 2);
	if (crustType == 'D' && size == 'M')
		return 9 + (totalToppings() * 2);
	if (crustType == 'D' && size == 'L')
		return 11 + (totalToppings() * 2);
	if (crustType == 'H' && size == 'S')
		return 7 + (totalToppings() * 2);
	if (crustType == 'H' && size == 'M')
		return 10 + (totalToppings() * 2);
	if (crustType == 'H' && size == 'L')
		return 12 + ( totalToppings() * 2 );

}
void Pizza::printToppings(ostream& out){			// printing the toppings 
	if (pepperoni > 0)
		cout << pepperoni << " Pepperoni" << endl;
	if (onionPepper > 0)
		cout << onionPepper << " Onion Pepper" << endl;
	if (pepperoni == 0 && onionPepper == 0)
		cout << "No Toppings" << endl;
	if (cheese)
		cout << "With Cheese" << endl;
	else
		cout << "No Cheese" << endl;
}
void Pizza::printPizzaStats(ostream& out){			// printing the pizza information 
	cout << "Size: " << getSize() << "\nCrust Type: " << getCrust() << endl;
}