#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a[80] = {};
    a[0] = 1, a[1] = 2, a[2] = 3;
    for(int i = 3; i < 80; i++)
        a[i] = a[i-1] + a[i-2];

    int t;

    while(cin >> t && t)
        cout << a[t-1] << endl;
}
