#include <bits/stdc++.h>
using namespace std;
char maze[1000][1000];

void createGrid(int M, int N) {
    for (int i = 0; i < (N * 2) + 1; ++i)  //天花板
        maze[0][i] = (i % 2 == 1 ? '_' : ' ');
    maze[0][N*2] = '\0';
    for (int j = 1; j < M + 1; ++j) { //天花板以下
        for (int k = 0; k < (N * 2) + 1; ++k) 
            maze[j][k] = (k % 2 == 0 ? '|' : '_');
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        stack<pair<int, int>> p; //記錄點 給flip使用
        int M, N, x, y;
        cin >> M >> N >> x >> y;
        createGrid(M, N);

        int checkX = (M+1) - x, checkY = y;
        int cnt = 2;
        p.push({checkX, checkY});
        char cmd;
        while (cin >> cmd && cnt < M * N) { 
            if (cmd == 'U') {
                maze[--checkX][checkY] = ' ';
                p.push({checkX, checkY});
                ++cnt;
            }
            else if (cmd == 'D') {
                maze[checkX][checkY] = ' ';
                p.push({checkX, checkY});
                ++checkX;
                ++cnt;
            }
            else if (cmd == 'L') {
                maze[checkX][--checkY] = ' ';
                --checkY;
                p.push({checkX, checkY});
                ++cnt;
            }
            else if (cmd == 'R') {
                maze[checkX][++checkY] = ' ';
                ++checkY;
                p.push({checkX, checkY});
                ++cnt;
            } 
            else { 
                int num;
                cin >> num;
                for (int i = 1; i <= num; ++i) p.pop();
                checkX = p.top().first, checkY = p.top().second;
            }
        }
        if (cmd == 'U') maze[--checkX][checkY] = ' ';
        else if (cmd == 'D') maze[++checkX][checkY] = ' ';
        else if (cmd == 'L') maze[checkX][--checkY] = ' ';
        else if (cmd == 'R') maze[checkX][++checkY] = ' ';

        for (int i = 0; i < M + 1; ++i) {
            for (int j = 0; j < (N * 2) + 1; ++j) {
                if (i == 0 && j == N * 2) continue;
                else cout << maze[i][j];
            }
            cout << endl;
        }
        memset(maze, ' ', sizeof(maze));
        cout << endl;
    }
}
