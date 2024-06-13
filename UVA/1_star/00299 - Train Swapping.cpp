#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cnt = 0, a[1000];
        cin >> n;
        for (int i = 0; i < n; ++i) 
            cin >> a[i];

        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }
}
