#include<iostream>
#include<string>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;
};


void show(const Employee* employee){
    cout << "Id: " << employee->id << endl;
    cout << "Name: " << employee->name << endl;
    cout << "Department: " << employee->department << endl;
}

void showEmployee(Employee employee){
    cout << "Id: " << employee.id << endl;
    cout << "Name: " << employee.name << endl;
    cout << "Department: " << employee.department << endl;
}

int main(){

    Employee employee1={12,"Zeynep Aslan","Bilişim"};
    
    showEmployee(employee1);
    show(&employee1);

    return 0;
}