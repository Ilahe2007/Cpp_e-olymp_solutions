#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll k,n,m,d;
	cin>>k>>n>>m>>d;
	ll x=(k*m*n)-(k*n+k*m+n*m);
	double g=d*k*m*n/x;
	if((x>=0 and (d*k*m*n)%x==0)){
		cout<<g<<endl;	
	}else{
		cout<<-1<<endl;
	}
}
