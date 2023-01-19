#include<bits/stdc++.h>
using namespace std;

void hanoi(long long n,char a,char b,char c){
	if (n==0){
		return ;
	}hanoi(n-1,a,c,b);
	cout<<a<<" "<<b<<endl;
	hanoi(n-1,c,b,a);
}

int main(){
	long long n;
	cin>>n;
	hanoi(n,'1','2','3');
	return 0;
}
