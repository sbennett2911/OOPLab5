/*Program Name: Employee Class
  Programmer: Steven Bennett
  CIS 247C, Week 5 Lab
  Date: June 9, 2013*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"

//function prototypes from Basic UI program week1
void DisplayApplicationInformation();
void DisplayDivider(string outputTitle);
string GetInput(string inputType);
void TerminateApplication();

int main()
{
DisplayApplicationInformation();

	Employee employee1; //instantiate employee1 object using default constructor.
	
	DisplayDivider("Employee 1");

	//This section prompts for user input
	string firstName = GetInput("first name");
	employee1.setFirstName(firstName);

	string lastName = GetInput("last name");
	employee1.setLastName(lastName);

	string gender = GetInput("gender");
	char firstCharacterGender = gender[0]; //takes value of gender, places in array, and assigns first charcter to char firstCharacterGender.
	employee1.setGender(firstCharacterGender);

	string dependents = GetInput("dependents");
	employee1.setDependents(dependents);

	string annualSalary = GetInput("annual salary");
	employee1.setAnnualSalary(annualSalary);

	string healthInsurance = GetInput("health insurance");
	employee1.getBenefit().setHealthInsurance(healthInsurance); //changed benefit to getBenefit.  Make sure it works correctly.
	
	string lifeInsurance = GetInput("life insurance");
	employee1.getBenefit().setLifeInsurance(stod(lifeInsurance)); //changed benefit to getBenefit. Make sure it works correctly.

	string vacation = GetInput("vacation");
	employee1.getBenefit().setVacation(stoi(vacation)); //changed benefit to getBenefit.  Make sure it works correctly.

	employee1.displayEmployee();

	cout << "\n----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.

	//BEGIN section that creates a salaried employee object.
	
	DisplayDivider("Employee 2");
	
	Salaried salariedEmployee1;
	
	//Enter the employee information to the object
	firstName = GetInput("first name");
	salariedEmployee1.setFirstName(firstName);

	lastName = GetInput("last name");
	salariedEmployee1.setLastName(lastName);

	gender = GetInput("gender");
	firstCharacterGender = gender[0];
	salariedEmployee1.setGender(firstCharacterGender);

	dependents = GetInput("dependents");
	salariedEmployee1.setDependents(dependents);

	annualSalary = GetInput("annual salary");
	salariedEmployee1.setAnnualSalary(annualSalary);

	healthInsurance = GetInput("health insurance");
	salariedEmployee1.getBenefit().setHealthInsurance(healthInsurance);

	lifeInsurance = GetInput("life insurance");
	salariedEmployee1.getBenefit().setLifeInsurance(stod(lifeInsurance));

	vacation = GetInput("vacation");
	salariedEmployee1.getBenefit().setVacation(stoi(vacation));
	
	salariedEmployee1.displayEmployee(); //display salaried employee information.

	cout << "\n----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.
	//END salaried employee section.

	//BEGIN section that creates a hourly employee object.
	DisplayDivider("Employee 3");
	Hourly hourlyEmployee1;

	//enter the employee information
	firstName = GetInput("first name");
	hourlyEmployee1.setFirstName(firstName);

	lastName = GetInput("last name");
	hourlyEmployee1.setLastName(lastName);

	gender = GetInput("gender");
	firstCharacterGender = gender[0];
	hourlyEmployee1.setGender(firstCharacterGender);

	dependents = GetInput("dependents");
	hourlyEmployee1.setDependents(dependents);

	annualSalary = GetInput("annual salary"); //this section may need to be changed
	hourlyEmployee1.setAnnualSalary();

	healthInsurance = GetInput("health insurance");
	hourlyEmployee1.getBenefit().setHealthInsurance(healthInsurance);

	lifeInsurance = GetInput("life insurance");
	hourlyEmployee1.getBenefit().setLifeInsurance(stod(lifeInsurance));

	vacation = GetInput("vacation");
	hourlyEmployee1.getBenefit().setVacation(stoi(vacation));

	hourlyEmployee1.displayEmployee(); //display hourly employee.

	cout << "\n----Number of Employee Objects Created----" << endl;
	cout << "Number of Employees: " << Employee::getNumEmployees() << endl; //getNumEmployees called using class name.
	//END hourly employee section.

	TerminateApplication();

return 0;
}

//functions defined from Basic UI week 1 lab.
void DisplayApplicationInformation()
{
	cout << "Welcome to the Employee Class Test Program." << endl;
	cout << "CIS247C, Week 5 Lab." << endl;
	cout << "Name: Steven Bennett" << endl;
	cout << "This program has been updated to include Salaried and Hourly class which inherit from Employee." << endl;
}

void DisplayDivider(string outputTitle)
{
	cout << '\n' << "******************************** " + outputTitle + " ***********************************" << endl;
}

string GetInput(string inputType)
{
	cout << "Please enter " + inputType + ": ";
	string strInput;
	getline(cin, strInput);

	return strInput;
}

void TerminateApplication()
{
	cout <<'\n' << "Thank you for using the application!" << endl;
}