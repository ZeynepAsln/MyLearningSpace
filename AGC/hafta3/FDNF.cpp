#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;

    ll count=0;
    
    for(ll i=1;i<=n;i++){
        ll c=0;
        for(ll j=1;j<=sqrt(i);j++){
            if(i%j==0){
                if(i/j==j){
                    c++;
                }
                else{
                    c+=2;
                }
            }
        }
        if(c==4) {
            count++;
        }
    }
    
    cout<<count;
    return 0;
}




