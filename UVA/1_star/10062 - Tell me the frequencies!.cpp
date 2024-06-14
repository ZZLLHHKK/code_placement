#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag = 0;
    string n;

    while (getline(cin, n)) {
        if (flag)
            cout << endl;
            
        int ct[128] = {};
        flag = 1;

        for (char c : n) {
            if (c >= 32 && c <= 128)
                ct[(int)c]++;
        }
        for (int i = 1; i <= 1001; ++i) {
            for (int j = 127; j >= 32; --j) {
                if (ct[j] == i) 
                    cout << j << " " << i << endl;
            }
        }
    }
}
