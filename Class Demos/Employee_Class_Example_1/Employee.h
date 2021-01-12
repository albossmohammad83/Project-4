#include <iostream>
using namespace std;

class Employee{
private:
	char linitial;
	int idnum;
	double payrate;

public:
	// constructors
	Employee();
	Employee(int id);
	Employee(int id, char last, double pay);

	//mutator functions
	void setId(int id);     
	void setPay(double pay);
	void setInitial(char last);

	//accessor functions
    int getId() ;
	char getInitial() ;
	double getPayRate()const ;

	void print(ostream&  out)  const;
	double calcPay() ;   // calculates one week's pay for this Employee

	static double overtime(double basepayrate, double overtimehours);
};

