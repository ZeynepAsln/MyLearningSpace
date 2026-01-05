#include<iostream>
using namespace std;

class Employee{
public:
    Employee(){
        cout << "Constructor çağrıldı" << endl;
    }
    //alt g r ü-tilda
    ~Employee(){
        cout << "Destructor çağrıldı" << endl;
    }
};

int main(){

    Employee *emp = new Employee();
    //delete emp;

    return 0;
}