#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  unordered_set<string>operators={"+","-","*","/"};
  stack<ll>s;
  string a;
  while(cin>>a){
    if(s.count(a)==0){
      s.push(stoll(a));
    }else{
      ll a=s.top();
      s.pop();
      ll b=s.top();
      s.pop();
      if(a=="+")    s.push(a+b);
      else if(a=="-")   s.push(b-a);
      else if(a=="*")   s.push(b*a);
      else       s.push(b/a);
    }
  }cout<<s.top<<endl;
}
