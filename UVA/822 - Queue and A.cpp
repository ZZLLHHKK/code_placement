#include <bits/stdc++.h>
using namespace std;
//exe time 2.3s
struct topic {
    int tid, n, tst, texe, dt; //問題編號 數量 起始時間 處理時間 需求間隔
};
struct staff {
    int sid, tn, isBusy = 0, last = 0, work_id = 0; //員工id 處理問題的數量 有沒有空 剩餘時間 他在做哪份工作.
    vector<int> stn; //問題種類
};
struct request { //需求queue
    int id, start_time, protime; //flag 為特殊標示時間相同優先
    bool operator<(const request &a) const {
        if (start_time != a.start_time)
            return start_time > a.start_time; //時間早則優先
        else 
            return id > a.id; //問題id小則優先
    }
};
inline int find_id(vector<int> c, int id) {
    for (int a : c) {
        if (a == id)
            return 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t, s, x = 1;

    while (scanf("%d", &t) != EOF && t) {
        int ans = 0;
        topic T[1000];
        staff S[1000];
        for (int i = 0; i < t; ++i) 
            scanf("%d%d%d%d%d", &T[i].tid, &T[i].n, &T[i].tst, &T[i].texe, &T[i].dt);
        scanf("%d", &s);
        for (int j = 0; j < s; ++j) {
            scanf("%d%d", &S[j].sid, &S[j].tn);
            int var;
            for (int k = 0; k < S[j].tn; ++k) {
                scanf("%d", &var);
                S[j].stn.push_back(var);
            }
        }
        priority_queue<request> pq; //把需求待辦排好
        priority_queue<request> rq; //暫放
        for (int i = 0; i < t; ++i) {
            int r = T[i].tst;
            for (int j = 0; j < T[i].n; ++j) {
                request R;
                R.id = T[i].tid, R.start_time = r, R.protime = T[i].texe;
                pq.push(R);
                r += T[i].dt;
            }
        }
        while (1) {
            while (!pq.empty() && pq.top().start_time == ans) {
                bool assigned = false;
                for (int i = 0; i < s; ++i) { //分配工作
                    if (S[i].isBusy == 0 && find_id(S[i].stn, pq.top().id)) {
                        S[i].isBusy = 1;
                        S[i].work_id = pq.top().id;
                        S[i].last = pq.top().protime;
                        assigned = true;
                        break;
                    }
                }
                if (!assigned) {
                    rq.push(pq.top());
                }
                pq.pop();
            }
            while (!rq.empty() && rq.top().start_time == ans) {
                bool assigned = false;
                for (int i = 0; i < s; ++i) { //分配工作
                    if (S[i].isBusy == 0 && find_id(S[i].stn, rq.top().id)) {
                        S[i].isBusy = 1;
                        S[i].work_id = rq.top().id;
                        S[i].last = rq.top().protime;
                        assigned = true;
                        break;
                    }
                }
                if (assigned) { //更新任務時間
                    rq.pop();
                } else {
                    request R = rq.top();
                    rq.pop();
                    rq.push({R.id, R.start_time + 1, R.protime});
                }
            }
            bool all_finish = true;
            for (int i = 0; i < s; ++i) { //這個時間點員工情形
                if (S[i].isBusy == 1) {
                    all_finish = false;
                    --S[i].last;
                    if (S[i].last == 0) {
                        S[i].isBusy = 0;
                        S[i].work_id = 0;
                    }
                }
            }
            if (all_finish && pq.empty() && rq.empty()) break;
            ++ans;
        }
        printf("Scenario %d: All requests are serviced within %d minutes.\n", x++, ans);
    }
}
