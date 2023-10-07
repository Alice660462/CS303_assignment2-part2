#include "Professional.h"
#include<string>
#include<iostream>
using namespace std;

//calculate weekly salary using monthly salary * 12 / total weeks in a year
double Professional::CalculateWeeklySalary()const {
	return monthlySalary * 12 / 52;
};

double Professional::CalculateVacationDays()const {
	return vacationDays;
};
// health contribution is 10% of weekly salary
double Professional::CalculateHealthContribution()const {
	return 0.1 * CalculateWeeklySalary();
};
// print all the information include name and id in the base class
void Professional::PrintInfo() {
	Employee::PrintInfo();
	cout << "Weekly salary: " << CalculateWeeklySalary() << endl;
	cout << "Monthly Vacation Days: " << CalculateVacationDays() << endl;
	cout << "Weekly Health Contribution: " << CalculateHealthContribution() << endl;
};