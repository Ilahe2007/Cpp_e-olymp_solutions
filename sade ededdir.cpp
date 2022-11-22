#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,i;
	cin>>n;
	bool a=true;
	if (n==1){
		cout<<"0";
	}else if (n==1){
		cout<<"1";
	}else{
		for (i=2;i<=sqrt(n);i++){
			if (n%i==0){
				cout<<"0";
				a=false;
				break;
			}
		}
		if (a==true){
			cout<<"1";
		}
	}
}
