#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for (long long i=1;i<=n;i++){
		for (long long j=1;j<=n;j++){
			if (j!=n){
				cout<<i*j<<" ";	
			}else{
				cout<<i*j<<endl;
			}
		}
	}
}
