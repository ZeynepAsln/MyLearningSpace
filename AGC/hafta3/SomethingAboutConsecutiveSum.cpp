#include<iostream>
using namespace std;

using ll = long long;

long long dondur(ll i,ll m,ll t){
    t+=i;
    if(t>m) return t-m;
    else return dondur(i+1,m,t);
}

int main() {

ll n;
cin>>n;

cout<<dondur(1,n,0);

    return 0;
}





