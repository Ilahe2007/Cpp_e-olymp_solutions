#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v;
	long long n,x,k;
	cin>>n;
	for (long long i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}while (cin>>k){
		for (long long i=1;i<=k%n;i++){
			v.insert(v.begin(),v.back());
			v.pop_back();
		}
	for (long long i=0;i<n;i++){
		cout<<v[i]<<" ";
		}
	}
}
