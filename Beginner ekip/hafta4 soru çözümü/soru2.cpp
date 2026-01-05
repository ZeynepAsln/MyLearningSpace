#include<iostream>
using namespace std;
int main(){
    double a,b;
   
    cout<< "Kitap kodu 0" << endl << "Temel gıda kodu 1" << endl << "Lüks ürün kodu 2" << endl;

    cout << "İstediğiniz ürünün kodunu giriniz: " << endl;
    cin >> a;

    cout << "İstediğiniz ürünün fiyatını giriniz: " << endl;
    cin >> b;
 
    double c=b;
    
    // double türündeki a, int'e dönüştürülmelidir.
    switch (static_cast<int>(a)){
        case 0:
            c += b*(0.04);
            cout << "Ürünün son fiyatı: " << c;
            break;
        case 1:
            c += b*(0.056);
            cout << "Ürünün son fiyatı: " << c;
            break;
        case 2:
            c += b*(0.196);
            cout << "Ürünün son fiyatı: " << c;
            break;
        default:
            cout << "Geçersiz kod girdiniz.";
            break;
    }

    return 0;
}