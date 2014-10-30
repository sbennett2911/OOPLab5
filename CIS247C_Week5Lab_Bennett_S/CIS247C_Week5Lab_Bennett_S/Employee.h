/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 5 Lab
  Date: June 9, 2013*/

#ifndef EMPLOYEE_H //inclusion guard
#define EMPLOYEE_H
#include "Benefit.h"
using namespace std;

class Employee
{
protected: //protected attributes
	string firstName;
	string lastName;
	char gender;
	int dependents;
	double annualSalary;
	Benefit benefit; // may have to add setters and getters for this.

private:
	static int numEmployees; //static variable keeps count of total number of employees.
	
public: //member functions
	Employee(); //default constructor
	Employee(string first, string last, char gen, int dep, Benefit benefit); //multi-arg constructor
	double calculatePay();
	void displayEmployee();
	string getFirstName();
	void setFirstName(string first);
	string getLastName();
	void setLastName(string last);
	char getGender();
	void setGender(char gen);
	int getDependents();
	void setDependents(int dep);
	void setDependents(string dep);
	double getAnnualSalary();
	void setAnnualSalary(double salary);
	void setAnnualSalary(string salary);
	static int getNumEmployees();
	Benefit getBenefit();
	void setBenefit(Benefit ben);
};

#endif