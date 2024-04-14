#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    char dot;

    while (cin >> h >> dot >> m) {
        if (h == 0 && m == 0) break;
        double ans = 0; 
        double hr = (h * 30) + (m * 0.5);
        double min = 6 * m;
        ans = abs(hr - min);
        if (ans > 180) ans = 360 - ans;
        cout << fixed << setprecision(3) << ans << endl;
    }
}
