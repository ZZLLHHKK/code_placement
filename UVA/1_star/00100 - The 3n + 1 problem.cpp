#include <bits/stdc++.h>
using namespace std;

int count(int i) {
    int cnt = 1;
    while (i != 1) {
        if (i % 2) 
            i = 3 * i + 1;
        else 
            i /= 2;
        cnt++;
    }
    return cnt;
}

int main() {
    int x, y;
    
    while (cin >> x >> y) {
        int tmpx = min(x, y), tmpy = max(x, y);

        int ans = 1;
        for (int i = tmpx; i <= tmpy; ++i) 
            ans = max(ans, count(i));
        cout << x << " " << y << " " << ans << endl;
    }
}
