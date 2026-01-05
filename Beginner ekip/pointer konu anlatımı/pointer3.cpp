#include<iostream>
using namespace std;

void DegerDegistir (int *b){
    *b = 15;
    cout << "b nin değeri: "<< *b <<endl;
}


int main(){
    int a=10;
    
    cout << "a nın değeri: "<< a << endl;
    
    DegerDegistir(&a);
    cout << "a nın yeni değeri: "<< a <<endl;

    return 0;
}