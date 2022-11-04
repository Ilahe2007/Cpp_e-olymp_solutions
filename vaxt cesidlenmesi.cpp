#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int saat[n], deq[n], san[n];
    for(int i = 0; i < n; i++){
        cin>>saat[i]>>deq[i]>>san[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(saat[j] > saat[j+1]){
                swap(saat[j], saat[j+1]);
                swap(deq[j], deq[j+1]);
                swap(san[j], san[j+1]);
            }
            else if(saat[j] == saat[j+1] && deq[j] > deq[j+1]){
                swap(deq[j], deq[j+1]);
                swap(san[j], san[j+1]);
            }
            else if(saat[j] == saat[j+1] && deq[j] == deq[j+1] && san[j] > san[j+1]){
                swap(san[j], san[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<saat[i]<<" "<<deq[i]<<" "<<san[i]<<endl;
    }


}

