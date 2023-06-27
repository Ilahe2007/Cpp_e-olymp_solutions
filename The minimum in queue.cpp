#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,a,b,c,x,cem=0;
	cin>>n>>a>>b>>c>>x;
	queue<ll>q;
	deque<ll>d;
	for(ll i=1;i<=n;i++){
		x=(a*x*x+b*x+c)/100%1000000;
		if(x%5<2){
			if(!q.empty()){
				if(q.front()==d.front()){
					d.pop_front();
				}q.pop();
			}
		}else{
			q.push(x);
			while(!d.empty() and x<d.back()){
				d.pop_back();
			}d.push_back(x);
		}if(!d.empty()){
			cem+=d.front();
		}
	}cout<<cem<<endl;
}
