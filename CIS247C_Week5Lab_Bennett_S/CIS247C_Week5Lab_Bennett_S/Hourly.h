/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 5 Lab
  Date: June 9, 2013*/

#include "Employee.h"
#ifndef HOURLY_H
#define HOURLY_H
using namespace std;

class Hourly : public Employee
{
private:
	//UML diagram showed these as Doubles compiler would only allow int.
	static const int MIN_WAGE = 10; //error message said "Error	12	error C2864: 'Hourly::MIN_WAGE' : only static const integral data members can be initialized within a class
	static const int MAX_WAGE = 75;
	static const int MIN_HOURS = 0;
	static const int MAX_HOURS = 50;
	double wage;
	double hours;
	string category;

public:
	Hourly();
	Hourly(double wage, double hours, string category);
	Hourly(string fname, string lname, char gen, int dep, double wage, double hours, Benefit ben, string category);
	double calculatePay();
	void displayEmployee();
	void setAnnualSalary(); //this was not in UML diagram, but lab instructions told us to override this function.
	//setters and getters
	double getWage();
	void setWage();
	double getHours();
	void setHours();
	string getCategory();
	void setCategory();
};

#endif