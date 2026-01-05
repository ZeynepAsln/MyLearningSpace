 #include "Employee.h"
 #include <iostream>

using namespace std;
int main(){
    
    Employee employee;
    
    employee.id = 12;
    employee.name = "Zeynep Aslan";
    employee.salary = 5000;

    employee.showInfos();

    return 0;
}