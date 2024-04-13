#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;

    while (getline(cin, str)) {
        int cnt = 0;
        for (int i = 0; i < str.length(); ++i) {
            if (isalpha(str[i]) && !isalpha(str[i+1])) cnt++;
        }
        cout << cnt << endl;
    }
    cout << endl;
}
