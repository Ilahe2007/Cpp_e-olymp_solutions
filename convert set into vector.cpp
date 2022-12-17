#include<bits/stdc++.h>
using namespace std;

int main(){
	set<long long>s;
	long long n,x;
	cin>>n;
	for (long long i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}vector<long long>v(s.begin(),s.end());
	sort(v.begin(),v.end());
	cout<<v[v.size()-2];
}
