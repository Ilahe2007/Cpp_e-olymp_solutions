#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b="";
	getline(cin,a);
	for (int i=0;i<a.length();i++){
		if (a[i]=='a'){
			b+=b;
		}else{
			b+=a[i];
		}cout<<b;
	}
}
