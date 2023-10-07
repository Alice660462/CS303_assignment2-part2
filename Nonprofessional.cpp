#include "Nonprofessional.h"
#include<string>
#include<iostream>

using namespace std;
// calculating weekly salary using hourly rate * total hours a week
double Nonprofessional::CalculateWeeklySalary()const  {
	return hourlyRate * hoursWorked;
};
// calculating vacation days using input vacation hours / 8 hours a day
double Nonprofessional ::CalculateVacationDays()const  {
	return vacationHours / 8;
};

//calculating weekly health contribution 0.05* weekly salary 
double Nonprofessional::CalculateHealthContribution()const  {
	return 0.05 * CalculateWeeklySalary();
};
// print all information including name and Id in the base class
void Nonprofessional::PrintInfo() {
	Employee::PrintInfo();
	cout << "Weekly salary: " << CalculateWeeklySalary() << endl;
	cout << "Monthly Vacation Days: " << CalculateVacationDays() << endl;
	cout << "Weekly Health Contribution: " << CalculateHealthContribution() << endl;
}