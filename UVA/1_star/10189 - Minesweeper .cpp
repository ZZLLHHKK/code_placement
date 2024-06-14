#include <bits/stdc++.h>
using namespace std;

int m, n;
char b[200][200];

int count(int i, int j) {
    int cnt = 0;
    for (int r = i - 1; r <= i + 1; ++r) {
        for (int c = j - 1; c <= j + 1; ++c) {
            if (!(r < 0 || r >= m || c < 0 || c >= n) && b[r][c] == '*') 
                cnt++;
        }
    }
    return cnt;
}

int main() {
    int t = 1;

    while (cin >> m >> n && (m || n)) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) 
                cin >> b[i][j];
        }
        if (t > 1) cout << endl;
        cout << "Field #" << t++ << ":" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (b[i][j] == '*') 
                    cout << "*";
                else {
                    int tmp = count(i, j);
                    cout << tmp;
                }
            }
            cout << endl;
        }
    }
}
