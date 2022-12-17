#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	long long n1,x1;
	long long n2,x2;
	cin>>n1;
	for (long long i=0;i<n1;i++){
		cin>>x1;
		v.push_back(x1);
	}cin>>n2;
	for (long long i=0;i<n2;i++){
		cin>>x2;
		v.push_back(x2);
	}sort(v.begin(),v.end());
	for (long long i=0;i<n1+n2;i++){
		cout<<v[i]<<" ";
	}
}
