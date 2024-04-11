#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, k = 1;

    while(cin >> t && t){
        int cnt = 0;
        vector<int> n(t);
        for(int i = 0; i < t; i++)
            cin >> n[i];
        
        int avg = accumulate(n.begin(), n.end(), 0) / t;

        for(int j = 0; j < t; j++){
            if(n[j] > avg)
                cnt += (n[j]-avg);
        }

        cout << "Set #" << k << endl;
        cout << "The minimum number of moves is " << cnt << "." << endl << endl;;
        k++;
    }
}
