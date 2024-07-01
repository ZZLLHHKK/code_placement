#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cs = 1;

    while (cin >> n) {
        int flag = 1, cnt[20005] = {};
        vector<int> d(10005);
        for (int i = 0; i < n; ++i) {
            cin >> d[i];
            if (d[i] <= 0) 
                flag = 0;
        }
        if (!flag) {
            cout << "Case #" << cs++ << ": It is not a B2-Sequence.\n" << endl;
            continue;
        }

        for (int i = 0; i < n - 1; ++i) {
            if (d[i] > d[i+1]) {
                flag = 0; 
                break;
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) 
                cnt[d[i] + d[j]]++;
        }

        for (int i = 0; i < 20005; ++i) {
            if (cnt[i] >= 2) {
                flag = 0; 
                break;
            }
        }

        if (flag)
            cout << "Case #" << cs++ << ": It is a B2-Sequence." << endl;
        else
            cout << "Case #" << cs++ << ": It is not a B2-Sequence." << endl;
        cout << endl;
    }
}
