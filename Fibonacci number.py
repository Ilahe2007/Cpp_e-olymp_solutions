#include<bits/stdc++.h>
using namespace std;

int Fibonacci(long long n){
	if (n<=1){
		return n;
	}else{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}

int main(){
	long long n;
	cin>>n;
	cout<<Fibonacci(n);	
}
