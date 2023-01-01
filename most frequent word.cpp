#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string,long long>m;
	multiset<string>t;
	set<string>s1;
	set<long long>s2;
	long long n;
	cin>>n;
	string a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
		t.insert(a[i]);
	}long long max=1;
	for (long long i=0;i<t.size();i++){
		m.insert(make_pair(a[i],t.count(a[i])));
		auto j = m.find(a[i]);
		if ((j->second)>=max){
			max=(j->second);
		}
 	}for (long long i=0;i<n;i++){
 		auto j = m.find(a[i]);
 		if (max==(j->second)){
 			s1.insert(j->first);
			s2.insert(j->second);
		 }
	 }vector<string>v(s1.begin(),s1.end());
	  sort(v.begin(),v.end());
	  reverse(v.begin(),v.end());
	  cout<<v[0]<<" "<<max<<endl;
 }
