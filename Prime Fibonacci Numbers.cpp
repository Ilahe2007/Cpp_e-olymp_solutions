#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n){
    if(n<=2){
        return 1;
    }else if(n==3){
        return 2;
    }else{
        return f(n-1)+f(n-2);
    }
}

bool g(ll n){
    bool a=true;
    if(n==1){
        a=false;
    }else{
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                a=false;
                break;
            }
        }
    }return a;
}

int main(){
    ll n,c=0;
    cin>>n;
    for(ll i=1;i<=100000000;i++){
        if(g(f(i))==true and c<n){
            c++;
        }if(c==n){
            cout<<f(i)<<endl;
            break;
        }
    }
}
