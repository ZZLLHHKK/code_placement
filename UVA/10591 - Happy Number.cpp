#include <bits/stdc++.h>
using namespace std;

int SUM(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10)*(n % 10);
        n /= 10;
    }
    return sum;
}

int main(){
    int t, n;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> n;
        set<int> flag;
        flag.insert(n);

        bool judge = true;
        int num = n;
        while(num != 1){
            num = SUM(num);
            if(flag.find(num) != flag.end()){
                judge = false;
                break;
            }
            flag.insert(num);
        }
        if(judge) printf("Case #%d: %d is a Happy number.\n", i, n);
        else printf("Case #%d: %d is an Unhappy number.\n", i, n);
     }
}
