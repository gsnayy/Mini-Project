// assignment8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Gharam Alsnayyan

#include <iostream>
#include <iomanip>
#include <string>
#include "teaminfo.h"
using namespace std;

int main()
{

	teamInfo teamInfo1;
	string teamNameandSport; 
	double salary = 0;
    double expenses = 0; 
	double revenue = 0;
	string coachName; 
	double profit = 0;

	//this portion of the code gets all the data from the user
	cout << "Let's calculate the gross profit of the sports team you picked!" << endl; 
	cout << "What is the team name and sport?" << endl; 

	getline(cin, teamNameandSport); // allows the user to input blank spaces
	cin.clear(); cin.sync();

	cout << "What is the head coach's first and last name?" << endl;
	getline(cin, coachName);
	cin.clear(); cin.sync();

	cout << "What is the head coach's salary?" << endl;  //asks for salary
	cin >> salary;
	
	cout << "What are the expenses for the team?" << endl; //asks for expenses
	cin >> expenses;

	cout << "What is the annual revenue of the sport?" << endl; //asks for  revenue 
	cin >> revenue;

	
	teamInfo1.teamInfo0(teamNameandSport, salary, expenses, revenue, coachName, profit ); //calls the function that changes the private variables 

	cout << "********************************************************************************************" << endl;
	teamInfo1.print(); //prints profit
	cout << "The head coach of the " << teamInfo1.getTeam() <<  "is " << teamInfo1.getCoachName() << endl; //outs the head coach and team name 
}

