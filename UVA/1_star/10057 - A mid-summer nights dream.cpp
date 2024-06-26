#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<int> d(1000001);
        for (int i = 0; i < n; ++i) 
            cin >> d[i];
        sort(d.begin(), d.begin() + n);

        int mid = d[n/2], a1 = d[(n-1)/2], a2 = 0, a3 = 0;
        for (int i = 0; i < n; ++i) {
            if (d[i] > mid)
                break;
            else if (d[i] == a1 || d[i] == mid)
                a2++;
        }

        if (n % 2)
            a3 = 1;
        else {
            if (mid == a1)
                a3 = 1;
            else 
                a3 = mid - a1 + 1;
        }

        cout << a1 << " " << a2 << " " << a3 << endl;
    }
}
