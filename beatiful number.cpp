#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	set<long long>s1;
	set<long long>s2;
	set<long long>s;
	long long a[n],b[m];
	for (long long i=0;i<n;i++){
		cin>>a[i];
		s1.insert(a[i]);
		s.insert(a[i]);
	}for (long long j=0;j<m;j++){
		cin>>b[j];
		s2.insert(b[j]);
		s.insert(b[j]);
	}vector<long long>v1(s1.begin(),s1.end());
	vector<long long>v2(s2.begin(),s2.end());
	vector<long long>v(s.begin(),s.end());
	if (v.size()!=v1.size()+v2.size()){
		long long min=1e+9;
		for (long long i=0;i<v1.size();i++){
			for (long long j=0;j<v2.size();j++){
				if (v1[i]==v2[j]){
					if (min>v1[i]){
						min=v1[i];
					}
					
				}
			}
		}cout<<min<<endl;
	}else{
		cout<<min(v1[0],v2[0])<<max(v1[0],v2[0]);
	}
}
