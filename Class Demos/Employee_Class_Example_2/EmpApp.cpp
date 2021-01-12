#include "Employee.h"

void print2( const Employee& emp);

int main () {
     Employee joe;
     Employee sue(555);
	 Initials temp('R', 'P');
	 Employee roger(678,temp , 8.00);

	 sue.setPay(10.50);
     cout << "roger" << roger.calcPay()<< endl;
     
	 cout << "sue" << sue.getPayRate() << endl;
	 sue.setInitial('S', 'R');
	 sue.print(cout);
	 cout << endl;
	 roger.print(cout);
	 print2(roger);
}


void print2(const  Employee& emp){
     cout << "\n Print2 pay " << emp.getPayRate() << " id is " << emp.getId() << endl;

}




    