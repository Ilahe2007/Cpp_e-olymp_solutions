#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for (int i=1;i<sqrt(n);i++){
		if (n%i==0){
			if (i%2!=0){
				cout<<i<<endl;
		}
	}
}
}
