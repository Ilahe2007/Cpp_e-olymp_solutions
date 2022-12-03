#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m,a,b,n=100,h=100;
	cin>>m;
	for (long long i=0;i<m;i++){
		cin>>a>>b;
		if (a>b){
			h=h-a;
		}else if (a<b){
			n=n-b;
		}else{
			n=n+0;
			h=h+0;
		}
	}
	cout<<n<<endl;
	cout<<h<<endl;
}
