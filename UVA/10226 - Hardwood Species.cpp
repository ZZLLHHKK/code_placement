#include <bits/stdc++.h>
using namespace std;
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1167
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    while (cin >> t) {
        // cin.get();
        // cin.get();
        cin.ignore();
        cin.ignore();
        for(int i = 0; i < t; ++i) {
            int total = 0;
            string name;
            map<string, int> spe;

            while (getline(cin, name) && name != "") 
                ++spe[name], ++total;

            for (auto it = spe.begin(); it != spe.end(); ++it)
                cout << it->first << " " << fixed << setprecision(4) << ((double)it->second / total) * 100 << endl;
            spe.clear();
            cout << endl;
        }
    }
}
