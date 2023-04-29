#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll x,n;
	cin>>x>>n;
	ll a[n][n];
	string b[n];
	for(ll i=0;i<n;i++){
		b[i]="NO";
	}for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cin>>a[i][j];
		}
	}bool flag=false;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			if(a[j][i]==x){
				b[i]="YES";
				break;
			}
		}
	}for(ll i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
}
