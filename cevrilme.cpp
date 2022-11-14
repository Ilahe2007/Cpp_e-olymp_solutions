#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,c=0;
	cin>>n;
	while (n!=1){
		if(n%2==0){
			n=n/2;
			c++;
		}
		else{
			n++;
			c++;
		}
	}
	cout<<c;
}
