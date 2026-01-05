#include <iostream>
using namespace std;

class Employee{
private: 
    string name;
    int salary; 

public:/*
    Employee(){
        this->name = "Bilgi Yok";
        this->salary = 0;
    }

    Employee(string name,int salary){
        this->name = name;
        this->salary = salary;
    }*/
/*
    void setSalary(int salary){
        this->salary = salary; 
       
    }

    int getSalary(){
        return salary;
    }

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }
*/
    void showInfos(){
        cout << "İsim: " << this->name << endl;
        cout << "Maaş: " << salary << endl;
    }

};


int main(){
    
   //Employee employee1("Zeynep Aslan",5000);
    //employee1.showInfos();

    Employee employee2;
    employee2.showInfos();
    
    return 0;
} 