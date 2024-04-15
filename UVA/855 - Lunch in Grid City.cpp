#include <bits/stdc++.h>
using namespace std;

class Solve {
private:
    int s = 0, a = 0, f = 0;
    int X[1000] = {}, Y[1000] = {0}; 
public:
    void read() {
        cin >> s >> a >> f;
        for (int i = 0; i < f; ++i) 
            cin >> X[i] >> Y[i];
    }
    void calculate() {
        sort(X, X+f);
        sort(Y, Y+f);
    }
    void display() {
        cout << "(Street: " << X[(f-1)/2] << ", Avenue: " << Y[(f-1)/2] << ")" << endl; 
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Solve n;
        n.read();
        n.calculate();
        n.display();
    }
}
