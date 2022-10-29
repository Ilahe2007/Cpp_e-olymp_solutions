#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	long long c;
	cin>>a>>c;
	char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for (int i=0;i<a.length();i++){
		cout<<a[b[i+c]];
	}
}
