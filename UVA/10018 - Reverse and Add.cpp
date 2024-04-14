#include <bits/stdc++.h>
using namespace std;

int judge(string a){
    for(int i = 0, j = a.length()-1; i < a.length() / 2 && j >= a.length() / 2; i++, j--){
        if(a[i] != a[j]) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a;

        if(a.length() == 1 && a[0] - '0' < 5){
            cout << "1 " << (a[0]-'0') * 2 << endl;
            continue;
        }

        b = a;
        reverse(b.begin(), b.end());

        int flag = 0, cnt = 1;
        string c;
        while(1){
            int sum = stoi(a) + stoi(b);
            c = to_string(sum);

            flag = judge(c);
            if(flag == 0){
                a = b = c;
                reverse(b.begin(), b.end());
                cnt++;
            } else{
                break;
            }
        }

        cout << cnt << " " << c << endl;
    }
}
