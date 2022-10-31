#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for (int i=0;i<n;i++){
		string a;
		cin>>a;
		long long x=0,y=0;
	for (long long i=0;i<a.length();i++){
		if (a[i]=='>'){
			x++;
		}else if (a[i]=='<'){
			x--;
		}else if (a[i]=='^'){
			y++;
		}else{
			y--;
		}
	}
	cout<<x<<" "<<y<<endl;
}
}
