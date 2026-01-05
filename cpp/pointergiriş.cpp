#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr = &a;

    cout << "değişkenin adresi: " << &a << endl;
    cout << "değişkenin adresi: " << ptr << endl;

    cout << "değişkenin adresi: " << *ptr << endl;

    *ptr=6;

    cout << "değişkenin adresi: " << a << endl;

    return 0;
}