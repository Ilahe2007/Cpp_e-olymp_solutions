#include<bits/stdc++.h>
using namespace std;
#define ll double

int main(){
    ll R,r,H;
    cin>>R>>r>>H;
    ll pi=M_PI;
    ll s=pi*(R*R+r*r+(R+r)*sqrt(H*H+R*R+r*r-2*R*r));
    cout.precision(2);
    cout<<fixed<<s<<endl;
}
