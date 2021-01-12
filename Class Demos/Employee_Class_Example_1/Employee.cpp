#include "Employee.h"


    Employee::Employee(){
	    idnum = 0;
		payrate = 0.0;
		linitial = '?';
     }

	Employee::Employee(int id){
	    idnum = id;
		payrate = 0.0;
		linitial = '?';
	}

	Employee::Employee(int id, char last, double pay){
	    idnum = id;
		payrate = pay;
		linitial = last;
	}

	void Employee::setId(int id){
	    idnum = id;
	}
	void Employee::setPay(double pay){
	    payrate = pay;
	}
	void Employee::setInitial(char last){
	     linitial = last;
	}

	double Employee::calcPay() {
	    return getPayRate() * 40;
	} 

	int Employee::getId() {
         return idnum;
	}

	char Employee::getInitial() {
		return linitial;
	}

	double Employee::getPayRate()  const {
        return payrate;
	}

	void Employee::print(ostream& out)   const{
          out << "ID" << idnum  << " payrate  " << getPayRate() << endl;
	}

	double Employee::overtime(double basepayrate, double overtimehours){
          return basepayrate * 1.5 * overtimehours;

	}