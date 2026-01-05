#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    int age;
    int salary;
public:
    Employee(string name,int age,int salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    friend void showInfos(Employee employee);
    friend class Test;
};


class Test{
public:
    static void showInfos(Employee employee){
        cout << employee.name << "  " << employee.age << "  " << employee.salary << endl;
    }
};


/*void showInfos(Employee employee){
    cout << employee.name << "  " << employee.age << "  " << employee.salary << endl;
}
*/

int main(){
  /* Employee employee("zeynep",25,3000);
    showInfos(employee);
*/ 
    Employee employee("zeynep",25,3000);
    Test::showInfos(employee);

    return 0;
}