#include <bits/stdc++.h>
using namespace std;

int dr[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}}; //E W S N (x, y)
map<int, char> ch = {{0, 'E'}, {1, 'W'}, {2, 'S'}, {3, 'N'}};
map<char, int> ch1 = {{'E', 0}, {'W', 1}, {'S', 2}, {'N', 3}};

int main() {
    int m, n, x, y;
    int r[1000][1000] = {0}; //matrix cor system change into real cor system
    char dir; //E W S N
    cin >> n >> m; //n * m matrix

    while (cin >> x >> y >> dir) {
        int cd = ch1[dir], flag = 0;
        string cmd;
        cin >> cmd;
        for (char c : cmd) {
            if (c == 'R') {
                if (cd == 0) cd = 2;
                else if (cd == 1) cd = 3;
                else if (cd == 2) cd = 1;
                else if (cd == 3) cd = 0;
            }
            else if (c == 'L') {
                if (cd == 0) cd = 3;
                else if (cd == 1) cd = 2;
                else if (cd == 2) cd = 0;
                else if (cd == 3) cd = 1;
            }
            else if (c == 'F') {
                x += dr[cd][0];
                y += dr[cd][1];
            }
            if (x < 0 || x > n || y < 0 || y > m) {
                x -= dr[cd][0];
                y -= dr[cd][1];
                if (r[x][y]) continue;
                r[x][y] = flag = 1;
                break;
            }
        }
        if (!flag)
            cout << x << " " << y << " " << ch[cd] << endl;
        else
            cout << x << " " << y << " " << ch[cd] << " LOST" << endl;
    }
}
