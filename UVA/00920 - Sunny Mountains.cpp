#include <bits/stdc++.h>
using namespace std;

struct p {
    double x, y;
};
bool cmp(const p& a, const p& b) {
    return a.x < b.x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int cnt;
        cin >> cnt;
        vector<p> shan;
        for (int i = 0; i < cnt; ++i) {
            p tmp;
            cin >> tmp.x >> tmp.y;
            shan.push_back(tmp);
        }
        sort(shan.begin(), shan.end(), cmp);
        double X = 0, Y = 0, x = 0, y = 0, h = 0;
        double ans = 0.0;
        for (int i = cnt-1; i >= 0; --i) {
            if (shan[i].y > h) {
                X = shan[i+1].x - shan[i].x;
                Y = shan[i].y - shan[i+1].y;
                y = shan[i].y - h;
                x = (X * y) / Y;
                ans += sqrt(x*x + y*y);
                h = shan[i].y;
            }
        }
        cout << fixed << setprecision(2) << ans << endl;
    }
}
