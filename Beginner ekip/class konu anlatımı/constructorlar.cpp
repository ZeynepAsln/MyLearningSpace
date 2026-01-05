#include <iostream>
using namespace std;

class Employee{
private: 
    string name;
    int salary; 

public:
    Employee(string isim,int maas){
        name = isim;
        salary = maas;
    }
 /*
    void setSalary(int maas){
        salary = maas; 
       
    }

    int getSalary(){
        return salary;
    }

    void setName(string isim){
        name = isim;
    }

    string getName(){
        return name;
    }
   
*/
    void showInfos(){
        cout << "İsim: " << name << endl;
        cout << "Maaş: " << salary << endl;
    }

};


int main(){
    
    Employee employee("Zeynep Aslan",5000);
    employee.showInfos();
    
    return 0;
} 