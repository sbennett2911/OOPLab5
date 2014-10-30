/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 5 Lab
  Date: June 9, 2013*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Salaried.h"
#include "Employee.h"


Salaried::Salaried()
{
	managementLevel = 0;
}

Salaried::Salaried(string fname, string lname, char gen, int dep, double sal, Benefit ben, int manLevel) : Employee(fname, lname, gen, dep, ben)
{
	managementLevel = manLevel;
	annualSalary = sal;
}

Salaried::Salaried(double sal, int manLevel)
{
	annualSalary = sal;
	managementLevel = manLevel;
}

double Salaried::calculatePay()
{
	return Employee::calculatePay() * (1 + (managementLevel * BONUS_PERCENT));
}

void Salaried::displayEmployee()
{
	Employee::displayEmployee();
	cout << "\nSalaried Employee" << endl;
	cout << "Management Level: " << managementLevel << endl;
}