#include<iostream>
using namespace std;

int main(){
    int n;

    cout<< "rekor sayısını giriniz: "<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    int sayac=0;
    int max=arr[0];

    for(int j=1;j<n; j++){
        if(max<arr[j]){
            sayac++;
            max=arr[j];
        }
    }
    cout<<sayac;

    return 0;
}