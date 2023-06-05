#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll g[n+1][n+1];
	memset(g,0,sizeof(g));
	for(ll i=1;i<=n;i++){
		ll q;
		cin>>q;
		while(q--){
			ll a;
			cin>>a;
			g[i][a]=1;
		}
	}ll c=0;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(i==j and g[i][j]==1){
				c++;
			}
		}
	}cout<<c<<endl;
}
