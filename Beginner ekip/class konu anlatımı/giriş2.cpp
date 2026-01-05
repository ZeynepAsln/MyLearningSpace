#include<iostream>
using namespace std;

class Student{
public:
    string name;

    void tellName(){
        cout << "benim adım " << name << endl; 
    }
};


int main(){

    Student student1;
    Student student2;

    student1.name = "Zeynep Aslan";
    student2.name = "Yunus Kangal";

    student1.tellName();
    student2.tellName();
    
    return 0;
}