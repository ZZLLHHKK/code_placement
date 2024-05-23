#include <bits/stdc++.h>
using namespace std;

bool check1(int a, int b) {
    if (a && b) 
        return true;
    else
        return false;
}

bool check2(int a, int b) {
    if (a || b) 
        return true;
    else
        return false;
}

bool check3(int a, int b) {
    if ((a > 0 && b > 0) || (a == 0 && b == 0)) 
        return false;
    else
        return true;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (check1(a, b) == c)
        cout << "AND" << endl;
    if (check2(a, b) == c)
        cout << "OR" << endl;
    if (check3(a, b) == c)
        cout << "XOR" << endl;
    if (check1(a, b) != c && check2(a, b) != c && check3(a, b) != c)
        cout << "IMPOSSIBLE" << endl;
}
