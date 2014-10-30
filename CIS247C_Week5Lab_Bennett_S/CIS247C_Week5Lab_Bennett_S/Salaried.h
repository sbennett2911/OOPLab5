/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 5 Lab
  Date: June 9, 2013*/

#include "Employee.h"
#ifndef SALARIED_H
#define SALARIED_H
using namespace std;

class Salaried : public Employee
{
private:
	static const int MIN_MANAGEMENT_LEVEL = 0;
	static const int MAX_MANAGEMENT_LEVEL = 3;
	static const int BONUS_PERCENT = 10; //UML diagram showed this as a double??? and is was not a decimal in UML diagram.
	int managementLevel;

public:
	Salaried(); //default constructor
	Salaried(string fname, string lname, char gen, int dep, double sal, Benefit ben, int manLevel); //multi-arg constructor
	Salaried(double sal, int manLevel); //multi-arg constructor
	double calculatePay();
	void displayEmployee();
	//setters and getters.
	int getManagementLevel();
	void setManagementLevel();
};


#endif