#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    if (n == 0 || n == 1) 
        return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int main() {
    string n;
    
    while (cin >> n) {
        if (!isPrime(stoi(n))) 
            cout << n << " is not prime." << endl;
        else {
            string tmp = n;
            reverse(n.begin(), n.end());
            if (isPrime(stoi(n)) && tmp != n)
                cout << tmp << " is emirp." << endl;
            else
                cout << tmp << " is prime." << endl;
        }
    }
}
