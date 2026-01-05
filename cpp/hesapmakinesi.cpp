#include<iostream>
using namespace std;

void toplama(int x,int y){
    cout << x+y << endl;
}

void çıkarma(int x,int y){
    if(x>y){
        cout << x-y << endl;
    }
    else{
        cout << y-x << endl;
    }
}

void çarpma(int x,int y){
    cout << x*y << endl;
}

void bölme(int x, int y){
    if(x>y){
        cout << x/y << endl;
    }
    else{
        cout << y/x << endl;
    }
}

int main(){
    int a,num1,num2;

cout << "1.toplama" << endl;
cout << "2.çıkarma" << endl;
cout << "3.çarpma" << endl;
cout << "4.bölme" << endl;

cout << "yapmak istediğiniz işlemi seçiniz: " << endl;
cin >> a;

cout << "istediğiniz iki sayıyı giriniz: " << endl;
cin >> num1 >> num2;

if(a=1){
    toplama(num1,num2);
}
else if(a=2){
    çıkarma(num1,num2);
}
else if(a=3){
    çarpma(num1,num2);
}
else if(a=4){
    bölme(num1,num2);
}
else{
    cout << "geçersiz işlem girdiniz." << endl;
}

    return 0;
}