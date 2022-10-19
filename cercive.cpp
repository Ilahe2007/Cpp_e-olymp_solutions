#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for (int j=0;j<3;j++){
		for (int i=0;i<n;i++){
			if (i==0 || i==n-1 || j==0 || j==2){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}cout<<endl;
		
	}
	return 0;
}
