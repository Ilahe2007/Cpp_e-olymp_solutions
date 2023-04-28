#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll h,m,t=0;
	char c;
	cin>>h>>c>>m;
	ll q;
	cin>>q;
	while(q--){
		m+=t;
		if(m>59){
			h+=m/60;
			m=m%60;
		}if(h>23)	h=h%24;
		cout<<setfill('0')<<setw(2)<<h<<":";
		cout<<setfill('0')<<setw(2)<<m<<endl;
		if(q!=0)	cin>>t;
	}
}
