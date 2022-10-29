#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	double a[n];
	for (int i = 0 ; i < n; i++)
	{
		cin>> a[i];
		a[i]=abs(a[i]);
	}
	double max=a[0];
	for (int i=1;i<n;i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	cout.precision(2);
	cout<<fixed<<max<<endl;
}
