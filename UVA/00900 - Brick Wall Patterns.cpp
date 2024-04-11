#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll w[50] = {};
    w[0] = 1; w[1] = 2;

    for(int i = 2; i < 50; i++)
        w[i] = w[i-1] + w[i-2];

    int t;

    while(cin >> t && t)
        cout << w[t-1] << endl;
}
