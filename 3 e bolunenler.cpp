#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		if (a[i]%3==0){
			cout<<a[i]/3<<" ";
		}else{
			cout<<a[i]<<" ";
		}
	}
}
