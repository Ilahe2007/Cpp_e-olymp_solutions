#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a[300], b = 0;
    long long n;
    cin>>n;
    for(long long i = 2; i <n; i++){
        if(n%i == 0){
            a[b++] = i;
            if(i != n/i){
                a[b++] = n/i;
            }
        }
    }
    sort(a + 1, a + b + 1);
        cout<<a[0]<<endl;
    }
