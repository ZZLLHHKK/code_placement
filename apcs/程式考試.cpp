#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int n[100][2];
    int ans1 = -100, ans2 = 0, cnt = 0; 
    for (int i = 0; i < t; ++i) {
        cin >> n[i][0] >> n[i][1];
        if (n[i][1] == -1) cnt++;
        if (ans1 < n[i][1]) {
            ans2 = n[i][0];
            ans1 = max(ans1, n[i][1]);
        }
    }
    ans1 = ans1 - t - (cnt *2);
    if (ans1 < 0) 
        cout << "0" << " ";
    else 
        cout << ans1 << " ";
    cout << ans2 << endl;
}
