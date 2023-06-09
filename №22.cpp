#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll n){
    bool a=true;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            a=false;
            break;
        }
    }return a;
}

ll g(ll n){
    string a=to_string(n);
    reverse(a.begin(),a.end());
    n=stoi(a);
    return n;
}

int main(){
    ll a,b,c=0;
    cin>>a>>b;
    for(ll i=a;i<=b;i++){
        if(f(i)==true and f(g(i))==true and i!=1){
            c++;
        }
    }cout<<c<<endl;
}
