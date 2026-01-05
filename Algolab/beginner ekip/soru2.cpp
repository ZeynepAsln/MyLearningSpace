#include <iostream>
#include<cmath>
using namespace std;

int main(){
   
    int n;
    int x;

    cout << "pozitif bir tam sayı giriniz: " << endl;
    cin >> n;
    cout << "bir reel sayı giriniz: " << endl;
    cin >> x;

    int a=1;
    double seri=0;

    for(int b=2 ; b<=2*n ; b+=2){
        seri += a/pow(x,b);
        a += 2;
    }
    
    cout << "pozitif tamsayı: " << n << endl;
    cout << "reel sayı: " << x << endl;
    cout << "seri: " << seri << endl;

    return 0;
}