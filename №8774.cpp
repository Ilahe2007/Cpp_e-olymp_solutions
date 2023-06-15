#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }ll g=n/2+1,c=0;
    for(auto x:m){
        if(x.second>=g){
            cout<<"YES"<<endl;
            c++;
            break;
        }
    }if(c==0){
        cout<<"NO"<<endl;
    }
}
