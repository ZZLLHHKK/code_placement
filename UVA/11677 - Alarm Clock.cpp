#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c ,d;

    while(cin >> a >> b >> c >> d){
        if(a == 0 && b == 0 && c == 0 && d == 0) break;
        int ans = c*60 + d - a*60 - b;
        if(ans < 0) ans += 1440;
        cout << ans << endl;
    }
}
