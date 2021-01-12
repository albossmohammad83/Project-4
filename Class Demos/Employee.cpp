#include "Employee.h" 
#include <iostream>
using namespace std;


      Employee::Employee() {
          payrate = 0.0;
		  linitial = '?';
		  idnum = -1;
      }

	  Employee::Employee(int id, char linit, double prate){
           payrate = prate;
		   idnum = id;
		   linitial = linit;
	  }

	  bool Employee::highPay( const Employee& obj)  const{

        if (  payrate > obj.payrate )
			return true;
		else 
		    return false;

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

	int Employee::getId()const {
         return idnum;
	}

	char Employee::getInitial()const {
		return linitial;
	}

	double Employee::getPayRate() const  {
        return payrate;
	}

	void Employee::print() const  {
          cout << " ID" << idnum  << " \npayrate  " << getPayRate()  << "\nlast init" << linitial<< endl;
	}

	

