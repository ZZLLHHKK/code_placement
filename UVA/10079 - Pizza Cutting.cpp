#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a;

    while(cin >> a && a >= 0){
        ll ans = (a*(a+1)/2) + 1;
        cout << ans << endl;
    }
}
