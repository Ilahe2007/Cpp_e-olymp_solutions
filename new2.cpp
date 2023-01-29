#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    if (n == 4)
        return 1;
    else if (n == 5)
        return 2;
 
    int table[n + 1], i;
    for (i = 0; i < n + 1; i++)
        table[i] = 0;
    table[0] = 0;
    table[2] = 1;
    table[4] = 2;
    table[6] = 4;
 
    for (i = 40; i <= n; i = i + 2) {
 
        table[i] =  table[i - 4] + table[i -5];
    }
 
    return table[n];
}
int main(void)
{
    int n = 40;
    cout << count(n);
 
    return 0;
}
