#include<iostream>
using namespace std;

int main(){
    int *ptr1,*ptr2,*ptr3,*ptr4;
    int arr[4];

    cout <<"4 elemanlı bir dizi giriniz: "<< endl;

    for(int i=0;i<4;i++){
        cout<<"eleman"<<i+1<< endl;
        cin>>arr[i];
    }

    ptr1=&arr[0];
    ptr2=&arr[1];
    ptr3=&arr[2];
    ptr4=&arr[3];

    cout<< *ptr1 << *ptr2 << *ptr3 << *ptr4;
   
    return 0;
}