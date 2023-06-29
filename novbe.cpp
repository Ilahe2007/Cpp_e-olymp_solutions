#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n,k;
  cin>>n>>k;
  priority_queue<ll,vector<ll>,greater<ll>>p;
  for(ll i=0;i<k;i++){
    p.push(0);
  }for(ll i=0;i<n;i++){
    ll a;
    cin>>a;
    ll b=p.top();
    p.pop();
    p.push(b+a);
  }ll c=0;
  while(!p.empty()){
    c=max(c,p.top());
    p.pop();
  }cout<<c<<endl;
}
