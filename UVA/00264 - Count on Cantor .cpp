#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;

    while(cin >> a){
        int i = 1, sum = 0;

        while(1){
            sum += i;
            if(sum >= a) break;
            i++;
        }

        sum -= a;
        int l = i, r = 1;
        if(i % 2 == 0) cout << "TERM " << a << " IS " << l-sum << "/" << r+sum << endl;
        else cout << "TERM " << a << " IS " << r+sum << "/" << l-sum << endl;  
    }
}
