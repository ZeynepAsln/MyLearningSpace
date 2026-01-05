#include<iostream>
using namespace std;
int main(){
    
    int boyut;
    cout<< "Dizinin boyutunu giriniz: " <<endl;
    cin>>boyut;

    int *dizi = new int[boyut];

    cout<< "Dizinin elemenalarını giriniz: " <<endl;
    for(int i=0 ; i<boyut ; i++){
        cin >> dizi[i];
    }
    
    int aranan;
    cout << "Aranacak sayiyi giriniz: " <<endl;
    cin>>aranan;
    
    int k=0;

    for(int j=0 ; j<boyut ; j++){
        if(dizi[j]==aranan){
            k++;
        }
        if(k!=0){
            cout<< aranan << " sayısı dizinin " << j+1 << ".sırasında bulunuyor" <<endl;
            break;
        }
    }

    if(k==0){
        cout << aranan << " sayısı dizide bulunamadı" << endl;
    }

    // Bellekten ayrılan alanı serbest bırakın
    delete[] dizi;
    
    return 0;
}