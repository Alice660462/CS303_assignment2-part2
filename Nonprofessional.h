#pragma once
/* Alice Zhao
* Company
*/

#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H
#include"Employee.h"
#include<string>
#include<iostream>
using namespace std;
// derived class
class Nonprofessional :public Employee {
private:
	double hourlyRate;
	double hoursWorked;
	double healthContribution;
	double vacationHours;
public:
	Nonprofessional(string Name, int id, double rate, double hoursworked, double vacationhrs) :
		Employee(Name, id), hourlyRate(rate), hoursWorked(hoursworked),
		vacationHours(vacationhrs) {}

	double CalculateWeeklySalary()const override;
	double CalculateVacationDays()const override;
	double CalculateHealthContribution()const override;
	void PrintInfo();
};


#endif
