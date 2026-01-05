#include <iostream>

using namespace std;

class Employee{
private:  
    string name;
    int id;
    int salary;
public:
    void showInfos(){
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

};


int main(){
    
    Employee employee;
    
    employee.id = 12;
    employee.name = "Zeynep Aslan";
    employee.salary = 5000;

    employee.showInfos();

    return 0;
}