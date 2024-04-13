#include <bits/stdc++.h>
using namespace std;

void solve() {
    int mx = 0;
    vector<int> a(10);
    vector<string> b(10);

    for (int i = 0; i < 10; ++i) {
        cin >> b[i] >> a[i];
        mx = max(mx, a[i]);
    }

    for (int j = 0; j < 10; ++j) {
        if (mx == a[j])
            cout << b[j] << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ":" << endl;
        solve();
    }
}
