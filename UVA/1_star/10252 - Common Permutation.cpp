#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        int cnt1[26] = {}, cnt2[26] = {};

        for (int i = 0; i < a.length(); ++i)
            cnt1[a[i]-'a']++;
        for (int i = 0; i < b.length(); ++i)
            cnt2[b[i]-'a']++;
        
        for (int i = 0; i < 26; ++i) {
            char c = 'a' + i;
            if (cnt1[i] > 0 && cnt2[i] > 0) {
                for (int j = 0; j < min(cnt1[i], cnt2[i]); ++j)
                    cout << c;
            }
        }
        cout << endl;
    }
}
