#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<long long,long long>>v;
	long long n;
	cin>>n;
	for (long long i=0;i<n;i++){
		long long h1,m1,h2,m2,d1,d2;
		char c;
		cin>>h1>>c>>m1>>h2>>c>>m2;
		d1=h1*60+m1;
		d2=h2*60+m2;
		v.push_back({d2,d1});
	}sort(v.begin(),v.end());
	long long c=1,a=v[0].first;
	for (long long i=1;i<n;i++){
		if (v[i].second>=a){
			c++;
			a=v[i].first;
		}
	}cout<<c<<endl;
}
