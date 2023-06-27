#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string a;
    ll n;
    cin>>n;
    getline(cin,a);
    while(n--){
        stack<char>d;
        ll c=0;
        getline(cin,a);
        if(a.size()%2==0){
          for(ll i=0;i<a.size();i++){
              if(a[i]=='(' || a[i]=='['){
                  d.push(a[i]);
              }else{
                  if(!d.empty()){
                      if(a[i]==')' and d.top()=='('){
                            d.pop();
                      }else if(a[i]==']' and d.top()=='['){
                            d.pop();
                       }else{
                           c++;
                           break;
                       }
                  }else{
                     c++;
                     break;
                  }
              }
        }if(d.size()==0 and c==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
      }else{
      	cout<<"No"<<endl;
	  }
    }
}
