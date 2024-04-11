#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n == 0 || n == 1) return 0;
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0) return 0;
        }
    }
    return 1;
}

int rev(int n){
    int s = 0;
    while(n > 0){
        s = s*10 + (n % 10);
        n /= 10;
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;

    while(cin >> a){
        int j = isPrime(a);
        if(j == 0) cout << a << " is not prime." << endl;
        else if(j == 1){
            int k = isPrime(rev(a));
            if(k == 1 && a != rev(a)) cout << a << " is emirp." << endl;
            else cout << a << " is prime." << endl;
        }
    }
}
