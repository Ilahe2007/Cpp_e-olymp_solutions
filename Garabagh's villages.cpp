#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<long long>v;
	long long n,b;
	cin>>n>>b;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
		v.push_back(a[i]);
	}long long d;
	while (b--){
		cin>>d;
		cout<<count(v.begin(),v.end(),d)<<endl;
}
}
