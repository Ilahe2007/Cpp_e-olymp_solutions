#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, u, v;
    cin>>n>>m;
    int degree_in[n+1], degree_out[n+1];
    memset(degree_in, 0, sizeof(degree_in));
    memset(degree_out, 0, sizeof(degree_out));
    while(m--){
        cin>>u>>v;
        degree_out[u]++;
        degree_in[v]++;
    }for(int i = 1; i <= n; i++){
        cout<<degree_in[i]<<" "<<degree_out[i]<<endl;
    }
}
