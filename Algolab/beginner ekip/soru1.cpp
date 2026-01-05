#include<iostream>
using namespace std;

int main(){

    int tavsan = 1042;
    int kus = 2272;

    int sene=0;

    while(tavsan<kus){
        tavsan += tavsan*(3.8/100);
        kus += kus*(1.2/100);
        sene++;
    }

    cout<< sene << " yıl sonra tavşan sayısı kuş sayısını geçecektir" << endl;
    cout<< "tavşan sayısı: " << tavsan << endl;
    cout<< "kuş sayısı: " << kus << endl;
    
    return 0;
}