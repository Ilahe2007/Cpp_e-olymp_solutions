#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1001][1001];
ll a[1001][1001];
ll n,m;

ll f(ll x,ll y){
	if (x==1) 	return y;
	if (dp[x-1][y-1]>=dp[x-1][y] && dp[x-1][y-1]>=dp[x-1][y+1])		return f(x-1,y-1);
	if (dp[x-1][y]>=dp[x-1][y-1] && dp[x-1][y]>=dp[x-1][y+1])		return f(x-1,y);
	return f(x-1,y+1);
}

int main(){
	ll x,y,berries=0;
	cin>>n>>m;
	for (ll i=1;i<=n;i++){
		for (ll j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}for (ll i=1;i<=n;i++){
		for (ll j=1;j<=m;j++){
			dp[i][j]=max({dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]})+a[i][j];
		}
	}x=n;
	for (ll j=1;j<=m;j++){
		if (dp[n][j]>berries){
			berries=dp[n][j];
			y=j;
		}
	}cout<<f(x,y)<<" "<<berries<<endl;
}
