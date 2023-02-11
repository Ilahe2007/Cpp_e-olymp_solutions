#include<bits/stdc++.h>
using namespace std;

long long f(long long a, long long b){
	if (b==0){
		return 1;
	}long long c=f(a,b/2);
	if (b%2==0){
		return c*c;
	}else{
		return c*c*a;
	}
}

int main(){
	long long a,n;
	cin>>a>>n;
	cout<<f(a,n);
}
