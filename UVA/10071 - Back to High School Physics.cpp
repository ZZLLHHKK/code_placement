#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v, t, ans = 0;
    while(cin >> v >> t){
        ans = v * (2*t);
        cout << ans << endl;
    }
}
