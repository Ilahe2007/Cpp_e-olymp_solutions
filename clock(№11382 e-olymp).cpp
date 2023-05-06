#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll h,m,k;
	cin>>h>>m>>k;
	ll m1=h*60+m;
	if((m1-k)>=0){
		ll m2=m1-k;
		cout<<m2/60<<" "<<m2-(m2/60)*60<<endl;
	}else{
		ll m2=24*60+h*60+m1-k;
		cout<<m2/60<<" "<<m2-(m2/60)*60<<endl;
	}
}
