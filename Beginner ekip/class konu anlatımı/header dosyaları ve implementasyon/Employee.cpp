#include "Employee.h"
#include <iostream>

using namespace std;

void Employee::showInfos() {
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}
