#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *ptr = &a;

    cout << "değişkenin adresi: " << &a << endl;
    cout << "değişkenin adresi: " << ptr << endl;
    cout << "değişkenin değeri: " << *ptr << endl;

    *ptr=6;

    cout << "değişkenin adresi: " << a << endl;

    return 0;
}