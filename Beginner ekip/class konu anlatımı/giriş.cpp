#include<iostream>
using namespace std;

class Student{
public:
    string name;
};


int main(){

    Student student1;
    Student student2;

    student1.name = "Zeynep Aslan";
    student2.name = "Yunus Kangal";

    cout << "öğrenci 1 ismi: " << student1.name << endl;
    cout << "öğrenci 2 ismi: " << student2.name << endl;

    return 0;
}