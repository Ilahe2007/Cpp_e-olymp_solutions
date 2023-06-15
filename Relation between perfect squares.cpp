#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll g(ll s){
    return s*8;
}

ll h(ll x){
    if(x==2){
        return 12;
    }else{
        return h(x-1)+8;
    }
}

ll f(ll n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 4;
    }else if(n%2!=0){
        return f(n-2)+g(ceil(n/2));
    }else{
        return f(n-2)+h(n/2);
    }
}

int main(){
    ll b;
    cin>>b;
    for(ll i=1;i<=b;i++){
        cout<<f(i)<<endl;
    }
}
