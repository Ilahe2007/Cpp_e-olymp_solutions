#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	while (cin>>n && n!=0){
		long long g=0;
		for (long long i=1;i<n;i++){
			for (long long j=i+1;j<=n;j++){
				g+=__gcd(i,j);
			}
		}
		cout<<g<<endl;
	}
}
