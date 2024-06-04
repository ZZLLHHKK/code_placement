#include <bits/stdc++.h>
using namespace std;

int m, n;
char b[100][100];

bool check(int x, int y, int rad) {
    char r = b[x][y];
    for (int i = x - rad; i <= x + rad; ++i) {
        for (int j = y - rad; j <= y + rad; ++j) {
            if ((i < 0 || i >= m || j < 0 || j >= n) || b[i][j] != r)
                return 0; 
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int cs;
        cin >> m >> n >> cs;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) 
                cin >> b[i][j];
        }
        int x, y;
        cout << m << " " << n << " " << cs << endl;
        for (int i = 1; i <= cs; ++i) {
            int r = 1;
            cin >> x >> y;
            while (check(x, y, r)) 
                r++;
            cout << 2*r - 1 << endl;
        }
    }
}
