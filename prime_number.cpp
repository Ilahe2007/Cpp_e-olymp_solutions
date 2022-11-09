#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin>>a;
	bool b=true;
	if (a==1){
		cout<<"No";
	}else if (a==2){
		cout<<"Yes";
	}else{
		for (long long i=2;i<sqrt(a);i++){
			if (a%i==0){
				cout<<"No";
				b=false;
				break;
			}
		}if (b==true){
			cout<<"Yes";
		}
	}
}
