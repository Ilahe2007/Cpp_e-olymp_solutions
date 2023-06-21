#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    deque<char>d;
    char a;
    ll c=0;
    while(cin>>a){
        if(a=='(' || a=='[' || a=='{'){
            d.push_back(a);
        }else{
            if(a==')' and d.front()=='(')                 d.pop_front();
            else if(a=='}' and d.front()=='{')            d.pop_front();
            else if(a==']' and d.front()=='[')            d.pop_front();
            else                                          d.push_back(a);
        }
    }if(d.size()==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
