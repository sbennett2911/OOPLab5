/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 5 Lab
  Date: June 9, 2013*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Hourly.h"
#include "Employee.h"

Hourly::Hourly() //may need to add and initialize constants here.
{
	wage = 0;
	hours = 0;
	category = "Unknown";
}

Hourly::Hourly(double wge, double hrs, string cat)
{
	wage = wge;
	hours = hrs;
	category = cat;
}

Hourly::Hourly(string fname, string lname, char gen, int dep, double wge, double hrs, Benefit ben, string cat) : Employee(fname, lname, gen, dep, ben)
{
	wage = wge;
	hours = hrs;
	category = cat;
}

double Hourly::calculatePay() //this should override function in Employee.
{
	return wage * hours;
}

void Hourly::setAnnualSalary() //monitor this function may need to change.
{
	annualSalary =  calculatePay() * 50;
}

void Hourly::displayEmployee()
{
	Employee::displayEmployee();
	cout << "\nHourly Employee" << endl;
	cout << "Category: " << category << endl;
	cout << "Wage: " << wage << endl;
	cout << "Hours: " << hours << endl;
}