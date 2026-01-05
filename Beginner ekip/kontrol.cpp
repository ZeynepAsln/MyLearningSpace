#include <iostream>
using namespace std;

double toplama(double a, double b) { 
  return a+b;
}

double cikarma(double a, double b) {
  return a-b ;
}

double bolme(double a, double b) { 
 return a/b ;
}

double carpma( double a, double b) {
 return a*b ;
} 

int main() {
  double a,b;
  int islem;
  cout << "1. islem toplama" << endl;
  cout << "2. islem cikarma" << endl;
  cout << "3. islem bolme" << endl;
  cout << "4. islem carpma" << endl ;
  cout << "İslem seciniz: ";
  cin >> islem ;

  cout << "islem yapmak istediginiz 2 sayiyi giriniz." << endl;
  cout << "1. sayi: " ;
  cin >> a;
  cout << endl;
  cout << "2. sayi: " ;
  cin >> b;

  if(islem==1) {
    cout << toplama(a,b);
  }
  else if(islem==2){
    cout << cikarma(a,b);
  }
  else if(islem==3) {
    cout <<  bolme(a,b);
  }
  else {
    cout << carpma(a,b);
  }


return 0; 
}
 
  