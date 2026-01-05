#include<iostream>
using namespace std;

int main(){
    int boyut;
    cout<<"dizinin boyutunu giriniz: "<<endl;
    cin>>boyut;

    int arr[boyut];
    
    cout<<"Dizinin elemanlarını giriniz: "<<endl;
    for(int i=0 ; i<boyut ; i++){
        cin>>arr[i];
    }

    if(boyut%2==0){
        int a = boyut/2;
        double b = arr[a-1]+arr[a];
        cout<< "Dizinin medyanı: "<< b/2<<endl;
    }

    else{
        int c = boyut/2;
        cout<< "Dizinin medyanı: "<< arr[c]<<endl;
    }

    return 0;
}