


class teamInfo { //calling the functions inside the class

public: 
	void print();
	
	void teamInfo0(std::string teamNameandSport, double salary, double expenses, double revenue, std::string coachName, double profit );

	std::string getTeam();

	std::string getCoachName();
	
	double getCoachSalary();

	double getExpenses();

	double getRevenue();

private: //private variables inside the class 
	std::string teamNameandSport1;
	double salary1 =0 ;
	double expenses1 = 0;
	double revenue1 = 0;
	std::string coachName1;
	double profit1 = 0;

};
