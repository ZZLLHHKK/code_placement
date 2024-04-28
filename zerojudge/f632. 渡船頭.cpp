#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;
//priority_queue practice , 註: pq 比較默認由大到小 因此排序函式邏輯要相反 ^_^
struct cmp1 { 
    bool operator()(const pii &p1, const pii &p2) {
        return p1.first > p2.first;
    }
};
struct cmp2 { 
    bool operator()(const pii &p1, const pii &p2) {
        return p1.second < p2.second;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t1, t2, k, p, t, m, ansp = 0, ansf = 0;
    cin >> t1 >> t2 >> k >> p;

    priority_queue<pii, vector<pii>, cmp1> pq; 
    while (cin >> t >> m)
        pq.push({t, m});

    int ods = ( (t2 - t1) / k ) + 1;
    priority_queue<pii, vector<pii>, cmp2> s; 
    for (int T = t1; ods != 0; T += k) {
        while (1) {
            if (!pq.empty() && pq.top().first <= T) {
                s.push({pq.top().first, pq.top().second});
                pq.pop();
            } else 
                break;
        }
        for (int j = 0; j < p && !s.empty(); ++j) {
            ansp++;
            ansf += s.top().second;
            s.pop(); 
        }
        ods--;
    }
    cout << ansp << " " << ansf << endl;
}
