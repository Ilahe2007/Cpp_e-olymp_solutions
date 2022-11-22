#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i=2;
	cin>>n;
	while (i<=sqrt(n)){
		if (n%i==0){
			cout<<i<<" ";
			n=n/i;
		}else if(i==2){
			i=3;
		}else{
			i+=2;
		}
	}
	cout<<n;
}
