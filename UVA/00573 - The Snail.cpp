#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double h, u, d, f, spot;

    while(cin >> h >> u >> d >> f && h){
        double spot = 0, fatigue = u * (f / 100.0), cl = u;
        int day = 0;

        while(1){
            day++;
            spot += cl;
            if(spot > h){
                cout << "success on day " << day << endl; 
                break;
            } 
            spot -= d;
            if(spot < 0){
               cout << "failure on day " << day << endl; 
               break; 
            } 
            cl -= fatigue;
            if(cl < 0) cl = 0;
        }
    }
}
