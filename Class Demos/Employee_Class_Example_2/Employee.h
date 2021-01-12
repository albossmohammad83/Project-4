#include <iostream>
using namespace std;

#include "Initials.h"

class Employee{
private:
	Initials initial;
	int idnum;
	double payrate;

public:
	// constructors
	Employee();
	Employee(int id);
	Employee(int id, Initials last, double pay);

	//mutator functions
	void setId(int id);     
	void setPay(double pay);
	void setInitial(char first, char last);

	//accessor functions
    int getId() const;
	Initials getInitial() const;
	double getPayRate()const ;

	void print(ostream&  out)  const;
	double calcPay() ;   // calculates one week's pay for this Employee
};

