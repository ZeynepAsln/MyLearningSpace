#include<iostream>
#include<cmath>
using namespace std;

double cıktı(double a, double b, double x, double n, double seri){
    
    if(b>2*n) return seri;
    
    else{
        seri += a/pow(x,b);
        a += 2;
        b += 2;
        return cıktı(a,b,x,n,seri);
    }
}


int main(){
    
    double n;
    double x;

    cout << "pozitif bir tam sayı giriniz: " << endl;
    cin >> n;
    cout << "bir reel sayı giriniz: " << endl;
    cin >> x;

    cout << "pozitif tamsayı: " << n << endl;
    cout << "reel sayı: " << x << endl;
    cout << "seri: " << cıktı(1,2,x,n,0) << endl;
    
    return 0;
}