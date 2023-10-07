#pragma once
/* Alice Zhao
* Company
*/

#ifndef Employee_H
#define Employee_H
#include<string>
#include<iostream>
using namespace std;

//abstract class

class  Employee {
protected:
	string name;
	int ID;
	
public:
	Employee():name("none"), ID(0) {}
	Employee(string Name,int id) :name(Name),ID(id){}

	virtual void PrintInfo() const;
	virtual double CalculateWeeklySalary()const =0;
	virtual double CalculateHealthContribution()const =0;
	virtual double CalculateVacationDays()const =0;
};

	



#endif


