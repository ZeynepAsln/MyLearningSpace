#include<iostream>
using namespace std;

int main(){
    int n,x;

    cout<<"n ve x değerlerini giriniz: "<<endl;
    cin>>n>>x;

    int sum=0;
    int t=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            t*=j;
        }
    sum+=pow(x,i+1)/t;
    }

    cout<<sum;
    return 0;
}