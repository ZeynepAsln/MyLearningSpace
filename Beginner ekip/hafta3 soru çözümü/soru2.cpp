#include<iostream>
using namespace std;
    
    void matrisYazdir(int arr[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
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

    void matrisToplam(int arr1[3][3],int arr2[3][3],int arrToplam[3][3]){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                arrToplam[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }

    int main(){

        int arr1[3][3],arr2[3][3],arrToplam[3][3]; 

        cout<<"birinci matrisi oluştur"<<endl;
        matris1(arr1);
        matrisYazdir(arr1);

        cout<<"ikinci matrisi oluştur"<<endl;
        matris2(arr2);
        matrisYazdir(arr2);
    
        matrisToplam(arr1, arr2, arrToplam);
        matrisYazdir(arrToplam);

        return 0;
    }