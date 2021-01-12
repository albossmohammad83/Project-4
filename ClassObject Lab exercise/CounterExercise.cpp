#include <iostream>
using namespace std;

void menu();

/* Complete the Counter functions, to get this program running
   Once completed, update implementation so that highestCount() is a 'static' function.
*/ 

class Counter {
public:
	Counter();
	Counter(int initVal);
	int getCount() const;
	void increase();          //increase by 1
	void decrease();          //decrease by 1
	int highestCount();
private:
	int theCount;
	static int highCount;    // current high count of all Counter objects
};

int Counter::highCount = -9999999;

int main ( ) {
	Counter apples;    // counts apples
	Counter oranges;   // counts oranges
	int userChoice;    // current user menu choice

	menu();     // display menu and get user input
	cin >> userChoice;

	            // process until user wants to exit
	while (userChoice != 6) {
		switch(userChoice) {
			case 1:
			    apples.increase();
				break;
			case 2:
				apples.decrease();
				break;
			case 3:
				oranges.increase();
				break;
			case 4:
				oranges.decrease();
			    break;
			case 5:
				cout << "there are " << apples.getCount() << "apples" <<endl;
	    		cout << "there are " << oranges.getCount() << "oranges" << endl;
				cout << "highest count is " << apples.highestCount() << endl;
		}
		menu();     // display menu and get user choice
	    cin >> userChoice;
	}
	return 0;
}

void menu() {
cout << "This application keeps track of apples/oranges in stock" <<endl;
	cout << "(1) Increase Apple count " << endl;
	cout << "(2) Decrease Apple count " << endl;
	cout << "(3) Increase Orange count " << endl;
	cout << "(4) Decrease Orange count " << endl;
	cout << "(5) Display counts " << endl;
	cout << "(6) Exit " << endl;
}

Counter::Counter(){
    
}

Counter::Counter(int initVal) {
    
}
	
int Counter::getCount() const{
      
	  
}

void Counter::decrease(){


}

void Counter::increase() { 

	
}

int Counter::highestCount() {

}