#include <bits/stdc++.h>
using namespace std;
const string str = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

int main() {
    int tmp = 0;
    string input;

    while (getline(cin, input)) {
        for (int i = 0; i < input.length(); ++i) 
            input[i] = tolower(input[i]);
        for (int i = 0; i < input.length(); ++i) {
            if (input[i] == ' ') {
                cout << " ";
                continue;
            }
            tmp = str.find(input[i]) - 2;
            cout << str[tmp];
        }
        cout << endl;
    }
}
