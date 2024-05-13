#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, int> ct;
    string tmp;
    while (t--) {
        string token;
        cin >> token >> tmp >> tmp;
        ct[token]++;
    }

    for (auto &it : ct) 
        cout << it.first << " " << it.second << endl;
}
