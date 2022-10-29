#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int mini = a[0];
	int idx = 0;
	for(int i = 1; i < n; i++){
        if(a[i] < mini){
            mini = a[i];
            idx = i;
        }
	}
    swap(a[0], a[idx]);
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}
