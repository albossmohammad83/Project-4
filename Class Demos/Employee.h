
class Employee{
private:
	char linitial;
	int idnum;
	double payrate;

public:
	
	Employee();
	Employee(int id, char linit, double prate = 10.00);
	
	

	//mutator functions
	void setId(int id);     
	void setPay(double pay);
	void setInitial(char last);

	//accessor functions
    int getId() const ;
	char getInitial() const ;
	double getPayRate() const;

	void print( )  const;
	double calcPay() ;   // calculates one week's pay for this Employee

	bool highPay( const Employee& obj)  const;

};

