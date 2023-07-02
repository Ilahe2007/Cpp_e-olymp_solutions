#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	map<ll,ll>m;
	while(cin>>n and n!=0){
		if(n==1){
			ll a,b;
			cin>>a>>b;
			m[b]=a;
		}else if(n==3){
			if(m.size()!=0){
				cout<<m.begin()->second<<endl;
				m.erase(m.begin()->first);
			}else{
				cout<<0<<endl;
			}
		}else if(n==2){
			if(m.size()!=0){
				cout<<prev(m.end())->second<<endl;
				m.erase(prev(m.end())->first);
			}else{
				cout<<0<<endl;
			}
		}
	}
}
