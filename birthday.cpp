#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for (long long j=1;j<=12;j++){
		for (long long i=1;i<=31;i++){
			if (i*12+j*31==n){
				if (i<10 && j<10){
					cout<<"0"<<i<<"/"<<"0"<<j<<endl;
				}else if (i>=10 && j>=10){
					cout<<i<<"/"<<j<<endl;
				}else if (i<10 && j>=10){
					cout<<"0"<<i<<"/"<<j<<endl;
				}else{
					cout<<i<<"/"<<"0"<<j<<endl;
				}
			}
		}
	}
}
