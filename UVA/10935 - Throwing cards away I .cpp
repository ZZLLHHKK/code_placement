#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(cin >> n && n){
        queue<int> a;
        vector<int> b;
        for(int i = 1; i <= n; i++) a.push(i);

        while(a.size() >= 2){
            b.push_back(a.front());
            a.pop();
            a.push(a.front());
            a.pop();
        }

        cout << "Discarded cards: ";
        for(int j = 0; j < b.size(); j++){
            if(j != b.size()-1) cout << b[j] << ", ";
            else cout << b[j]; 
        }
        cout << endl;
        cout << "Remaining card: " << a.front() << endl;
    }
}
