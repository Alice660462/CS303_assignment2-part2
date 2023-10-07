#pragma once

#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H
#include"Employee.h"
#include<string>
#include<iostream>
using namespace std;
//derived class
class Professional :public Employee {
private:
	double monthlySalary;
	double vacationDays;
	double healthContribution;
public:
	Professional(string Name, int id, double salary, double vacation) :Employee(Name, id),
		monthlySalary(salary), vacationDays(vacation) {}
	double CalculateWeeklySalary()const override;
	double CalculateVacationDays()const override;
	double CalculateHealthContribution()const override;
	void PrintInfo();
};
#endif
