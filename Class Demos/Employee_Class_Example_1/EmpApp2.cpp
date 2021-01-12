#include "Employee.h"

void print2( const Employee& emp);

int main () {
     Employee joe;
     Employee sue(555);
	 Employee roger(678,'P', 8.00);

	 sue.setPay(10.50);
     cout << "roger" << roger.calcPay()<< endl;
     
	 cout << "sue" << sue.getPayRate() << endl;
	 sue.print(cout);
	 roger.print(cout);
	 print2(roger);
}


void print2(const  Employee& emp){
     cout << "\n Print2 pay " << emp.getPayRate() << " id is " << emp.getId() << endl;

}




    