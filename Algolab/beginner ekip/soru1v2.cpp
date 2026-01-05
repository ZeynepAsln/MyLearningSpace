#include<iostream>
using namespace std;

int zaman(int tavsan,int kus, int sene){
       
    if(tavsan>kus){
        cout<< "tavşan sayısı: " << tavsan << endl;
        cout<< "kuş sayısı: " << kus << endl;
        return sene;
    } 
    
    else{
        tavsan += tavsan*(3.8/100);
        kus += kus*(1.2/100);
        sene++;
        return zaman(tavsan,kus,sene);
    }
}

int main(){

    int tavsan = 1042;
    int kus = 2272;

    cout<< zaman(tavsan,kus,0) << " yıl sonra tavşan sayısı kuş sayısını geçecektir" << endl;

    return 0;
}