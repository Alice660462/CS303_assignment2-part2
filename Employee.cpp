#include "Employee.h"
#include <iostream>
#include<string>
#include<iostream>
using namespace std;
//virtual function
void Employee::PrintInfo() const {
	cout << "Employee's name: " << name << endl;
	cout << "Employee's ID: " << ID << endl;
}

