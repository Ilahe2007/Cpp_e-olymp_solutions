#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for (int i=0; i<n;i++){
		long long l,w,h;
		cin>>l>>w>>h;
		long long a=2*(l*h+h*w);
		if (a%16==0){
			cout<<a/16<<endl;
		}
		else{
			cout<<a/16+1<<endl;
		}
	}
}
