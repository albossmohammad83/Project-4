#include "Employee.h"
#include <iostream>
using namespace std;


int main () {
	
	Employee emp1;
	Employee emp2(4444,'S');

	//emp1.setId(9999);
	//emp1.setInitial('R');
	//emp1.setPay(45.67);


	emp1.print();
	emp2.print();

	if (emp1.highPay(emp2) )
		cout << "emp1 has the higher pay ");
	else
		cout << "emp2 has the higher pay " );

   

}




    