#include<iostream>
using namespace std;

int main(){
long long n  ;
long long sum=0;
cin>>n;

for(int i=1;i<=n;++i){
    if(i%2==1)  sum+=i;
    else sum+=i/2;
    }
    cout<<sum-1; 
    
    return 0;
}

   
