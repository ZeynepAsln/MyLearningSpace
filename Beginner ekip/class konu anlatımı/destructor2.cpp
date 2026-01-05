#include<iostream>
using namespace std;

class Employee{
public:
    string *s;
    int *i;

    Employee(string str,int ivalue){
        s = new string;
        i = new int;

        *s = str;
        *i = ivalue;
    }

    void show(){
        cout << "String değer: " << *s << " Int değer: " << *i << endl;
    }

    ~Employee(){
        delete s;
        delete i;
        cout << "Destructor çağrıldı" << endl;
    }
};

int main(){

    Employee *emp = new Employee("Zeynep Aslan",20);
    emp->show();

    delete emp;

    return 0;
}