#include<iostream>
using namespace std;

int Toplama(int a,int b){
    return a+b;
}

int Çıkarma(int a,int b){
    return a-b;
}

int Çarpma(int a,int b){
    return a*b;
}

int Bölme(int a,int b){
    return a/b;
}

int main(){
    int x,a,b;
    
    cout<<"1-Toplama"<< endl <<"2-Çıkarma"<<endl<<"3-Çarpma"<<endl<<"4-Bölme"<<endl<<"5-Çıkış"<<endl;

    cout<<"Lütfen yapmak istediğiniz işlemi seçin : "<<endl;
    cin>>x;
    
    if(x==5) 
        return 0;

    cout<<"Lütfen işlem yapmak için iki sayı seçin : "<<endl;
    cin>>a>>b;

    if(x==1) 
        cout << "Sonuç : " << a << "+" << b << " = " << Toplama(a,b);
    else if(x==2) 
        cout << "Sonuç : " << a << "-" << b << " = " << Çıkarma(a,b);
    else if(x==3) 
        cout << "Sonuç : " << a << "*" << b << " = " << Çarpma(a,b);
    else if(x==4) 
        cout << "Sonuç : " << a << "/" << b << " = " << Bölme(a,b);
    else 
        cout << "Geçersiz işlem girdiniz.";


    return 0;
}