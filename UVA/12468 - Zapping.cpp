
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;

    while(cin >> a >> b){
        if(a == -1 && b == -1) break;
        int ans = abs(b - a);

        if(ans > 50) ans = 100 - ans;

        cout << ans << endl;
    }
}
