#include <bits/stdc++.h>
using namespace std;

const string num = "0123456789";

string sub(string a, string b) { //減法安全
    string ans = "";
    bool sign = 0;
    if (a.length() < b.length()) {
        sign = 1;
        swap(a, b);
    } else if (a.length() == b.length()) {
        for (int i = 0; i < a.length(); ++i) {
            if (a[i] - '0' < b[i] - '0') {
                sign = 1;
                swap(a, b);
                break;
            }
        }
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int len = max(a.length(), b.length()), carry = 0;
    for (int i = 0; i < len; ++i) {
        int tmp = (a[i] - '0') - carry;
        if (i < b.length()) tmp -= (b[i] - '0');
        if (tmp < 0) {
            tmp += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        ans.push_back(num[tmp]);
    }
    
    for (int i = ans.length() - 1; i >= 0; --i) {
        if (ans[i] == '0') 
            ans[i] = ' ';
        else 
            break;
    }
    if (sign) 
        ans.push_back('-');

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        string a, b, ans;
        cin >> a >> b;
        ans = sub(a, b);
        if (ans[0] == '-') cout << "-";
        for (int i = (ans[0] == '-' ? 1 : 0); i < ans.length(); ++i) {
            if (ans[i] != ' ') cout << ans[i];
        }
        cout << endl;
    }
}
