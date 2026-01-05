#include <iostream>
using namespace std;

int main() { 
    int tavsansayisi=1042;
    int kussayisi=2272;
    int sene=0;

    while(tavsansayisi<=kussayisi){
        tavsansayisi+=tavsansayisi*(3.8/100);
        kussayisi+=kussayisi*(1.2/100);
        sene++;
    }

    cout << sene << " yıl sonra tavşan sayısı kuş sayısını geçecektir." << endl;
    cout << "tavşan sayısı=" << tavsansayisi << endl;
    cout << "kuş sayısıasdasdasdasdasdas= "<< kussayisi << endl;

    return 0;
}