#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p[101],w[2001];
set<ll>s;
map<ll,ll>mp;
deque<ll>d;

int main(){
  ll n,m,b,c=0;
  cin>>n>>m;
  for(ll i=1;i<=n;i++){
    s.insert(i);
  }for(ll i=1;i<=n;i++){
      cin>>p[i];
  }for(ll i=1;i<=m;i++){
      cin>>w[i];
  }for(ll i=1;i<=2*m;i++){
      cin>>b;
      if(b>0){
         if(!s.empty()){
            auto x=*s.begin();
            s.erase(s.begin());
            c+=w[b]*p[x];
            mp[b]=x;
         }else{
            d.push_back(b);
         }
     }else{
         ll x=mp[-b];
         if(!d.empty()){
            b=d[0];
            c+=w[b]*p[x];
            mp[b]=x;
        }else{
           s.insert(x);
        }
      }
    }cout<<c<<endl;
}
