#include<iostream>
using namespace std;
void matris1(int arr[][2],int n){

for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
       cin>>arr[i][j];
    }
}
cout<<endl;
cout<<endl;
}

void matrisYazdır(int arr[][2],int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
       cout<<arr[i][j];
    }
    cout << endl;
}   
}


int main() {

int n;

cout<<"satır sayısını seçiniz: "<<endl;
cin>>n;

int arr1[n][2];

cout<<"değerleri giriniz: "<<endl;
matris1(arr1,n);
matrisYazdır(arr1,n);


return 0;
}