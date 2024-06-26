#include <bits/stdc++.h>
using namespace std;

int m, n;

bool cmp(int a, int b) {
    if (a % n != b % n) //a front b back
        return a % n < b % n;
    if (a % 2) { //a is odd
        if (b % 2) // b is odd
            return a > b;
        return true; // b is even
    }
    if (b % 2) // a even b odd
        return false;
    return a < b; //a and b are even
}

int main() {

    while (cin >> m >> n) {
        vector<int> p(10001);
        cout << m << " " << n << endl;

        for (int i = 0; i < m; ++i) 
            cin >> p[i];

        sort(p.begin(), p.begin() + m, cmp);

        for (int i = 0; i < m; ++i)
            cout << p[i] << endl;
    }
}
