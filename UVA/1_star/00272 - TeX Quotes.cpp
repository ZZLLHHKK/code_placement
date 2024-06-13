#include <bits/stdc++.h>
using namespace std;    

int main(){
    char c;
    int cnt = 0;

    while(cin.get(c)){
        if(c != '"') 
            cout << c;
        else if(++cnt % 2) 
            cout << "``";
        else 
            cout << "''";
    }
}
