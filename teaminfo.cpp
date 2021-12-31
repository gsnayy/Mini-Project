#include <iomanip>
#include <iostream>
#include "teaminfo.h"
using namespace std;


double profit = 0;

void teamInfo::teamInfo0 (string teamNameandSport, double salary, double expenses, double revenue, string coachName, double profit) //function that allows access to private variables 
{
	teamNameandSport1 = teamNameandSport;  //renaming the variables
	salary1 = salary; 
	expenses1 = expenses; 
	revenue1 = revenue;
	coachName1 = coachName; 
	profit1 = profit;
	

}

string teamInfo::getTeam()  //allows access to the function in the class that will return the team nam and sport 
{
	return teamNameandSport1; 
}

string teamInfo::getCoachName() //allows access to the function in the class that will return the coach name 
{
	return coachName1;
}

double teamInfo::getCoachSalary() //allows access to the function in the class that will return the salary
{
	return salary1;
}
double teamInfo::getExpenses() //allows access to the function in the class that will return the espenses
{
	return expenses1;
}
double teamInfo::getRevenue () //allows access to the function in the class that will return the revenue 
{
	return revenue1;
} 
void teamInfo::print() //thid function calculates the profit and prints put the statement 

{
	profit1 = (revenue1 - salary1 - expenses1);
	cout << "The gross profit of the sport is $" << profit1 << endl;
	

}