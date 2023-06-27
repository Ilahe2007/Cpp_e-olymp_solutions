#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  stack<ll>dirty, washed, dried;
  ll n,a,b;
  cin>>n;
  for(ll i=n;i>=1;i++){
    dirty.push(i);
  }while(cin>>a>>b){
    if(a==1){
      while(b--){
        washed.push(dirty.top());
        dirty.pop();
      }
    }else{
      while(b--){
        dried.push(washed.top());
        washed.pop();
      }
    }
  }while(!dried.empty()){
    cout<<dried.top()<<endl;
    dried.pop();
  }
}
