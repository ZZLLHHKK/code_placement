#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;

    while(cin >> n && n){
        if(n >= 101) ans = n - 10;
        else ans = 91;
        cout << "f91(" << n << ") = " << ans << endl;
    }
}
