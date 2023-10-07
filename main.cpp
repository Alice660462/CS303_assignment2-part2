#include "Employee.h"
#include"Professional.h"
#include"Nonprofessional.h"
#include <iostream>
#include<cmath>

using namespace std;
int main() {
	Professional person1("Alice1", 00246,7000,3);
	Nonprofessional person2("Alice2",00247,15,30,10);
	person1.CalculateWeeklySalary();
	person1.CalculateVacationDays();
	person1.CalculateHealthContribution();
	person1.PrintInfo();
	person2.CalculateWeeklySalary();
	person2.CalculateVacationDays();
	person2.CalculateHealthContribution();
	person2.PrintInfo();
	return 0;
}