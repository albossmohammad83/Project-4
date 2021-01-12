#include "Employee.h"


    Employee::Employee(){
		Initials temp('?', '?');
	    idnum = 0;
		payrate = 0.0;
		initial = temp;
     }

	Employee::Employee(int id): idnum(id), payrate(0)
	{   Initials temp('?', '?');
	    initial = temp; 
	}

	Employee::Employee(int id, Initials last, double pay): idnum(id), payrate(pay), initial(last){
	 
	}

	void Employee::setId(int id){
	    idnum = id;
}
	void Employee::setPay(double pay){
	   payrate = pay;
	}

	void Employee::setInitial(char first, char last){
	     initial = Initials(first,last);
	}

	double Employee::calcPay() {
	    return getPayRate() * 40;
	} 

	int Employee::getId()const{
         return idnum;
	}

	Initials Employee::getInitial()const{
		return initial;
	}

	double Employee::getPayRate()  const {
        return payrate;
	}

	void Employee::print(ostream& out)   const{
          out << "ID" << idnum  << " payrate  " << getPayRate() << endl;
		  out << initial.getLast() << " " << initial.getFirst() ;
	}