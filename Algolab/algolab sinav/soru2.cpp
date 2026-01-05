#include<iostream>
using namespace std;

void matris(int arr[3][3]){
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<endl;
            }
        cout << endl;
    }
}

void matris1(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"elemanı giriniz: "<<endl;
            cin>>arr[i][j];
        }
    }
}

void matris2(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"elemanı giriniz: "<<endl;
            cin>>arr[i][j];
        }
    }
}

void matris3(int arr1[3][3],arr2[3][3],arr3[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main(){
    int arr1[3][3],arr2[3][3],arr3[3][3]; 

    cout<<"birinci matrisi oluştur"<<endl;
    matris1(arr1);

    cout<<"ikinci matrisi oluştur"<<endl;
    matris2(arr2);

    matris(arr1);
    matris(arr2);
    matris3(arr1, arr2, arr3);
    matris(matris3);

    return 0;
}