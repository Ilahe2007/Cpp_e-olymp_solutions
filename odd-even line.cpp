#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long a[n];
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}
	long long c=0;
	for (long long i=0;i<n;i++){
		if (a[i]%2!=0){
			c++;
		}
	}
	long long d=0;
		for (long long j=0;j<c;j++){
			if (a[j]%2==0){
				d++;
			}
		}
	cout<<d;
}
