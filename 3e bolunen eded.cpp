#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,c=0;
	cin>>n;
	double a[n],d=0;
	for (long long i=0;i<n;i++){
		cin>>a[i];
	}
	for (long long i=0;i<n;i++){
		if (i%3==2 and a[i]>0){
			d+=a[i];
			c++;
		}
	}
	cout.precision(2);
	cout<<c<<" "<<fixed<<d;
}
